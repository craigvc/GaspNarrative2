// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Items/RangedWeaponItem.h"
#include "NarrativeArsenal/Public/GAS/NarrativeCombatAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangedWeaponItem() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_URangedWeaponItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_URangedWeaponItem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCombatTraceData();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class URangedWeaponItem
void URangedWeaponItem::StaticRegisterNativesURangedWeaponItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URangedWeaponItem);
UClass* Z_Construct_UClass_URangedWeaponItem_NoRegister()
{
	return URangedWeaponItem::StaticClass();
}
struct Z_Construct_UClass_URangedWeaponItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for a ranged weapon - includes some properties that aren't required for melee based weapons \n */" },
		{ "IncludePath", "Items/RangedWeaponItem.h" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "Base class for a ranged weapon - includes some properties that aren't required for melee based weapons" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticFire_MetaData[] = {
		{ "Category", "Weapon|Config|Ranged Weapon" },
		{ "Comment", "/** The hitscan ability will read this to configure itself */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "The hitscan ability will read this to configure itself" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[] = {
		{ "Category", "Weapon|Config|Ranged Weapon" },
		{ "Comment", "/** The time between shots, hitscan ability configures itself with this */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "The time between shots, hitscan ability configures itself with this" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimFOVPct_MetaData[] = {
		{ "Category", "Weapon|Config|Ranged Weapon" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The FOV we should zoom in to as a percentage of the base FOV. 1=no zoom at all, 0.1 = huge amount of zoom */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "The FOV we should zoom in to as a percentage of the base FOV. 1=no zoom at all, 0.1 = huge amount of zoom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceData_MetaData[] = {
		{ "Category", "Weapon|Config|Trace" },
		{ "Comment", "//The trace data we'll use when firing the weapon \n" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "The trace data we'll use when firing the weapon" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutomaticFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticFire;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimFOVPct;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URangedWeaponItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_bAutomaticFire_SetBit(void* Obj)
{
	((URangedWeaponItem*)Obj)->bAutomaticFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_bAutomaticFire = { "bAutomaticFire", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URangedWeaponItem), &Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_bAutomaticFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticFire_MetaData), NewProp_bAutomaticFire_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, RateOfFire), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RateOfFire_MetaData), NewProp_RateOfFire_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_AimFOVPct = { "AimFOVPct", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, AimFOVPct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimFOVPct_MetaData), NewProp_AimFOVPct_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_TraceData = { "TraceData", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, TraceData), Z_Construct_UScriptStruct_FCombatTraceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceData_MetaData), NewProp_TraceData_MetaData) }; // 179883577
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URangedWeaponItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_bAutomaticFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_RateOfFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_AimFOVPct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_TraceData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URangedWeaponItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWeaponItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URangedWeaponItem_Statics::ClassParams = {
	&URangedWeaponItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URangedWeaponItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponItem_Statics::Class_MetaDataParams), Z_Construct_UClass_URangedWeaponItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URangedWeaponItem()
{
	if (!Z_Registration_Info_UClass_URangedWeaponItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URangedWeaponItem.OuterSingleton, Z_Construct_UClass_URangedWeaponItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URangedWeaponItem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<URangedWeaponItem>()
{
	return URangedWeaponItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URangedWeaponItem);
URangedWeaponItem::~URangedWeaponItem() {}
// End Class URangedWeaponItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_RangedWeaponItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URangedWeaponItem, URangedWeaponItem::StaticClass, TEXT("URangedWeaponItem"), &Z_Registration_Info_UClass_URangedWeaponItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URangedWeaponItem), 1582192110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_RangedWeaponItem_h_2947043809(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_RangedWeaponItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_RangedWeaponItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
