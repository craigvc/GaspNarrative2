// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/ViewModel_InventoryAttributes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_InventoryAttributes() {}

// Begin Cross Module References
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryManagerViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_InventoryAttributes();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_InventoryAttributes_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UViewModel_InventoryAttributes
void UViewModel_InventoryAttributes::SetWealth_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_InventoryAttributes* Obj = (UViewModel_InventoryAttributes*)Object;
	float& Value = *(float*)InValue;
	Obj->SetWealth(Value);
}
void UViewModel_InventoryAttributes::SetEncumbrance_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_InventoryAttributes* Obj = (UViewModel_InventoryAttributes*)Object;
	float& Value = *(float*)InValue;
	Obj->SetEncumbrance(Value);
}
void UViewModel_InventoryAttributes::SetEquipmentLevel_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_InventoryAttributes* Obj = (UViewModel_InventoryAttributes*)Object;
	float& Value = *(float*)InValue;
	Obj->SetEquipmentLevel(Value);
}
void UViewModel_InventoryAttributes::SetAverageEquipmentLevel_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_InventoryAttributes* Obj = (UViewModel_InventoryAttributes*)Object;
	float& Value = *(float*)InValue;
	Obj->SetAverageEquipmentLevel(Value);
}
void UViewModel_InventoryAttributes::SetWeightLimit_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_InventoryAttributes* Obj = (UViewModel_InventoryAttributes*)Object;
	float& Value = *(float*)InValue;
	Obj->SetWeightLimit(Value);
}
void UViewModel_InventoryAttributes::StaticRegisterNativesUViewModel_InventoryAttributes()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_InventoryAttributes);
UClass* Z_Construct_UClass_UViewModel_InventoryAttributes_NoRegister()
{
	return UViewModel_InventoryAttributes::StaticClass();
}
struct Z_Construct_UClass_UViewModel_InventoryAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides values from inventory attributes backing the inventory.\n */" },
		{ "DisplayName", "Inventory Attributes" },
		{ "IncludePath", "UI/Viewmodels/ViewModel_InventoryAttributes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryAttributes.h" },
		{ "ToolTip", "Provides values from inventory attributes backing the inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceAttributeRefresh_MetaData[] = {
		{ "Category", "Inventory Attributes" },
		{ "Comment", "/**\n\x09 * If set to true, forces the refresh of attributes, not relying on the callback values.\n\x09 *\n\x09 * This is a fast solution for scenarios where the Attribute does not provide the correct value in\n\x09 * multiplayer modes, usually due to issues on the Attribute Aggregator not being properly created,\n\x09 * which is a very specific corner case that may arise depending on the Ability System's setup.\n\x09 *\n\x09 * The cost of setting this to true is that on each update, a lookup will be done in the owner's\n\x09 * Ability System, to retrieve the current value for the attribute, instead of just using the value\n\x09 * already provided by the ASC Attribute delegate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryAttributes.h" },
		{ "ToolTip", "If set to true, forces the refresh of attributes, not relying on the callback values.\n\nThis is a fast solution for scenarios where the Attribute does not provide the correct value in\nmultiplayer modes, usually due to issues on the Attribute Aggregator not being properly created,\nwhich is a very specific corner case that may arise depending on the Ability System's setup.\n\nThe cost of setting this to true is that on each update, a lookup will be done in the owner's\nAbility System, to retrieve the current value for the attribute, instead of just using the value\nalready provided by the ASC Attribute delegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wealth_MetaData[] = {
		{ "Category", "Inventory Attributes" },
		{ "Comment", "/** Amount of wealth (funds/currency/souls, etc.) available. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryAttributes.h" },
		{ "ToolTip", "Amount of wealth (funds/currency/souls, etc.) available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Encumbrance_MetaData[] = {
		{ "Category", "Inventory Attributes" },
		{ "Comment", "/** Current Encumbrance in the Attribute Set. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryAttributes.h" },
		{ "ToolTip", "Current Encumbrance in the Attribute Set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentLevel_MetaData[] = {
		{ "Category", "Inventory Attributes" },
		{ "Comment", "/** Current GearLevel in the Attribute Set. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryAttributes.h" },
		{ "ToolTip", "Current GearLevel in the Attribute Set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageEquipmentLevel_MetaData[] = {
		{ "Category", "Inventory Attributes" },
		{ "Comment", "/** Current Average Gear Level available in the Attribute Set. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryAttributes.h" },
		{ "ToolTip", "Current Average Gear Level available in the Attribute Set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightLimit_MetaData[] = {
		{ "Category", "Inventory Attributes" },
		{ "Comment", "/** Maximum weight supported by this inventory. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryAttributes.h" },
		{ "ToolTip", "Maximum weight supported by this inventory." },
	};
#endif // WITH_METADATA
	static void NewProp_bForceAttributeRefresh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceAttributeRefresh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Wealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Encumbrance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EquipmentLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageEquipmentLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_InventoryAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::NewProp_bForceAttributeRefresh_SetBit(void* Obj)
{
	((UViewModel_InventoryAttributes*)Obj)->bForceAttributeRefresh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::NewProp_bForceAttributeRefresh = { "bForceAttributeRefresh", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UViewModel_InventoryAttributes), &Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::NewProp_bForceAttributeRefresh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceAttributeRefresh_MetaData), NewProp_bForceAttributeRefresh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::NewProp_Wealth = { "Wealth", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_InventoryAttributes::SetWealth_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_InventoryAttributes, Wealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wealth_MetaData), NewProp_Wealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::NewProp_Encumbrance = { "Encumbrance", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_InventoryAttributes::SetEncumbrance_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_InventoryAttributes, Encumbrance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Encumbrance_MetaData), NewProp_Encumbrance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::NewProp_EquipmentLevel = { "EquipmentLevel", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_InventoryAttributes::SetEquipmentLevel_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_InventoryAttributes, EquipmentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentLevel_MetaData), NewProp_EquipmentLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::NewProp_AverageEquipmentLevel = { "AverageEquipmentLevel", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_InventoryAttributes::SetAverageEquipmentLevel_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_InventoryAttributes, AverageEquipmentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageEquipmentLevel_MetaData), NewProp_AverageEquipmentLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::NewProp_WeightLimit = { "WeightLimit", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_InventoryAttributes::SetWeightLimit_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_InventoryAttributes, WeightLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightLimit_MetaData), NewProp_WeightLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::NewProp_bForceAttributeRefresh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::NewProp_Wealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::NewProp_Encumbrance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::NewProp_EquipmentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::NewProp_AverageEquipmentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::NewProp_WeightLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryManagerViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::ClassParams = {
	&UViewModel_InventoryAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_InventoryAttributes()
{
	if (!Z_Registration_Info_UClass_UViewModel_InventoryAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_InventoryAttributes.OuterSingleton, Z_Construct_UClass_UViewModel_InventoryAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_InventoryAttributes.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UViewModel_InventoryAttributes>()
{
	return UViewModel_InventoryAttributes::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_InventoryAttributes);
UViewModel_InventoryAttributes::~UViewModel_InventoryAttributes() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_InventoryAttributes, Wealth)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_InventoryAttributes, Encumbrance)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_InventoryAttributes, EquipmentLevel)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_InventoryAttributes, AverageEquipmentLevel)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_InventoryAttributes, WeightLimit)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_InventoryAttributes)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_InventoryAttributes, Wealth)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_InventoryAttributes, Encumbrance)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_InventoryAttributes, EquipmentLevel)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_InventoryAttributes, AverageEquipmentLevel)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_InventoryAttributes, WeightLimit)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_InventoryAttributes);
// End Class UViewModel_InventoryAttributes

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryAttributes_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_InventoryAttributes, UViewModel_InventoryAttributes::StaticClass, TEXT("UViewModel_InventoryAttributes"), &Z_Registration_Info_UClass_UViewModel_InventoryAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_InventoryAttributes), 1952201289U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryAttributes_h_1804959490(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryAttributes_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
