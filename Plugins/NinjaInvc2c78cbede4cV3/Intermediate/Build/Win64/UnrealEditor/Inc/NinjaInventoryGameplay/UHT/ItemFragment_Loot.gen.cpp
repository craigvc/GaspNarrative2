// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/ItemFragments/ItemFragment_Loot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFragment_Loot() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
NINJAINVENTORY_API UClass* Z_Construct_UClass_ULootableItemInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootSelector_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Loot();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Loot_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UItemFragment_Loot
void UItemFragment_Loot::StaticRegisterNativesUItemFragment_Loot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFragment_Loot);
UClass* Z_Construct_UClass_UItemFragment_Loot_NoRegister()
{
	return UItemFragment_Loot::StaticClass();
}
struct Z_Construct_UClass_UItemFragment_Loot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A fragment that specifies an item that can be looted.\n */" },
		{ "DisplayName", "Loot" },
		{ "IncludePath", "GameFramework/ItemFragments/ItemFragment_Loot.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Loot.h" },
		{ "ToolTip", "A fragment that specifies an item that can be looted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LootCost_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Cost to select this item in a loot table.\n\x09 *\n\x09 * Loot is collected until an Inventory Manager's Loot Budget is exhausted, which is a process\n\x09 * that happens every time loot is requested (disregarding cached loot).\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Loot.h" },
		{ "ToolTip", "Cost to select this item in a loot table.\n\nLoot is collected until an Inventory Manager's Loot Budget is exhausted, which is a process\nthat happens every time loot is requested (disregarding cached loot)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropChance_MetaData[] = {
		{ "Category", "Fragment" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** chance for this item to drop, in the [0, 1] range. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Loot.h" },
		{ "ToolTip", "chance for this item to drop, in the [0, 1] range." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDropFullStack_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** If true, ignores a quantity range and always drops the full stack. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Loot.h" },
		{ "ToolTip", "If true, ignores a quantity range and always drops the full stack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantityRange_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** A range of quantities to drop. The system limits these quantities considering the item's stack. */" },
		{ "EditCondition", "!bShouldDropFullStack" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Loot.h" },
		{ "ToolTip", "A range of quantities to drop. The system limits these quantities considering the item's stack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridesLootSelector_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Informs if there's a dedicated loot selector for this loot. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Loot.h" },
		{ "ToolTip", "Informs if there's a dedicated loot selector for this loot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideSelectorClass_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Overrides the Selector used to decide if an item drops and the amount.\n\x09 *\n\x09 * This is an override to the default selector used by all classes, and it should be\n\x09 * set only if this item has a special condition for when to drop. It can always extend\n\x09 * the original conditions and add any specific ones needed.\n\x09 *\n\x09 * Some examples of when special selectors might be needed:\n\x09 * \n\x09 * - Quest Items: requires a check on a Quest Manager\n\x09 * - Class Specific: Loot that should only drop for certain classes.\n\x09 * - Seasonal Items: requires a certain date range\n\x09 */" },
		{ "EditCondition", "bOverridesLootSelector" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Loot.h" },
		{ "ToolTip", "Overrides the Selector used to decide if an item drops and the amount.\n\nThis is an override to the default selector used by all classes, and it should be\nset only if this item has a special condition for when to drop. It can always extend\nthe original conditions and add any specific ones needed.\n\nSome examples of when special selectors might be needed:\n\n- Quest Items: requires a check on a Quest Manager\n- Class Specific: Loot that should only drop for certain classes.\n- Seasonal Items: requires a certain date range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LootCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropChance;
	static void NewProp_bShouldDropFullStack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDropFullStack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuantityRange;
	static void NewProp_bOverridesLootSelector_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridesLootSelector;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverrideSelectorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFragment_Loot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_LootCost = { "LootCost", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Loot, LootCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LootCost_MetaData), NewProp_LootCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_DropChance = { "DropChance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Loot, DropChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropChance_MetaData), NewProp_DropChance_MetaData) };
void Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_bShouldDropFullStack_SetBit(void* Obj)
{
	((UItemFragment_Loot*)Obj)->bShouldDropFullStack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_bShouldDropFullStack = { "bShouldDropFullStack", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemFragment_Loot), &Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_bShouldDropFullStack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldDropFullStack_MetaData), NewProp_bShouldDropFullStack_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_QuantityRange = { "QuantityRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Loot, QuantityRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantityRange_MetaData), NewProp_QuantityRange_MetaData) };
void Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_bOverridesLootSelector_SetBit(void* Obj)
{
	((UItemFragment_Loot*)Obj)->bOverridesLootSelector = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_bOverridesLootSelector = { "bOverridesLootSelector", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemFragment_Loot), &Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_bOverridesLootSelector_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridesLootSelector_MetaData), NewProp_bOverridesLootSelector_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_OverrideSelectorClass = { "OverrideSelectorClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Loot, OverrideSelectorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryLootSelector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideSelectorClass_MetaData), NewProp_OverrideSelectorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFragment_Loot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_LootCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_DropChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_bShouldDropFullStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_QuantityRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_bOverridesLootSelector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Loot_Statics::NewProp_OverrideSelectorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Loot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemFragment_Loot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Loot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UItemFragment_Loot_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULootableItemInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Loot, ILootableItemInterface), false },  // 2226237777
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFragment_Loot_Statics::ClassParams = {
	&UItemFragment_Loot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemFragment_Loot_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Loot_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Loot_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemFragment_Loot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemFragment_Loot()
{
	if (!Z_Registration_Info_UClass_UItemFragment_Loot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFragment_Loot.OuterSingleton, Z_Construct_UClass_UItemFragment_Loot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemFragment_Loot.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UItemFragment_Loot>()
{
	return UItemFragment_Loot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFragment_Loot);
UItemFragment_Loot::~UItemFragment_Loot() {}
// End Class UItemFragment_Loot

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Loot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemFragment_Loot, UItemFragment_Loot::StaticClass, TEXT("UItemFragment_Loot"), &Z_Registration_Info_UClass_UItemFragment_Loot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFragment_Loot), 3829536840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Loot_h_2107214482(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Loot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Loot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
