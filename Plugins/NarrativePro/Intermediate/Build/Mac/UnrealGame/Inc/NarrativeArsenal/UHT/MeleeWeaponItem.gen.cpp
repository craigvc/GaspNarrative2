// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Items/MeleeWeaponItem.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeWeaponItem() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMeleeWeaponItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMeleeWeaponItem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeCombatData();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UMeleeWeaponItem
void UMeleeWeaponItem::StaticRegisterNativesUMeleeWeaponItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeleeWeaponItem);
UClass* Z_Construct_UClass_UMeleeWeaponItem_NoRegister()
{
	return UMeleeWeaponItem::StaticClass();
}
struct Z_Construct_UClass_UMeleeWeaponItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Specialized weapon that contains values that melee abilites will require to operate. \n */" },
		{ "IncludePath", "Items/MeleeWeaponItem.h" },
		{ "ModuleRelativePath", "Public/Items/MeleeWeaponItem.h" },
		{ "ToolTip", "Specialized weapon that contains values that melee abilites will require to operate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeData_MetaData[] = {
		{ "Category", "Weapon|Config|Trace" },
		{ "Comment", "/** Weapon trace distance when doing a hitscan */" },
		{ "ModuleRelativePath", "Public/Items/MeleeWeaponItem.h" },
		{ "ToolTip", "Weapon trace distance when doing a hitscan" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeleeData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeWeaponItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeleeWeaponItem_Statics::NewProp_MeleeData = { "MeleeData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeWeaponItem, MeleeData), Z_Construct_UScriptStruct_FMeleeCombatData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeData_MetaData), NewProp_MeleeData_MetaData) }; // 2534374841
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeleeWeaponItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeWeaponItem_Statics::NewProp_MeleeData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeWeaponItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeleeWeaponItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWeaponItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeWeaponItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeWeaponItem_Statics::ClassParams = {
	&UMeleeWeaponItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeleeWeaponItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeWeaponItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeWeaponItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeWeaponItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeleeWeaponItem()
{
	if (!Z_Registration_Info_UClass_UMeleeWeaponItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeWeaponItem.OuterSingleton, Z_Construct_UClass_UMeleeWeaponItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeleeWeaponItem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UMeleeWeaponItem>()
{
	return UMeleeWeaponItem::StaticClass();
}
UMeleeWeaponItem::UMeleeWeaponItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeWeaponItem);
UMeleeWeaponItem::~UMeleeWeaponItem() {}
// End Class UMeleeWeaponItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_MeleeWeaponItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeleeWeaponItem, UMeleeWeaponItem::StaticClass, TEXT("UMeleeWeaponItem"), &Z_Registration_Info_UClass_UMeleeWeaponItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeWeaponItem), 2774456296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_MeleeWeaponItem_h_3639130527(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_MeleeWeaponItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_MeleeWeaponItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
