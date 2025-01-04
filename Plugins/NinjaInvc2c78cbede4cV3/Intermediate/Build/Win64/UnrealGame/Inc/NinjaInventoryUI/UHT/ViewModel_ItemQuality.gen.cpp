// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/ViewModel_ItemQuality.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_ItemQuality() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemQuality();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemQuality_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UViewModel_ItemQuality
void UViewModel_ItemQuality::SetQualityTag_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemQuality* Obj = (UViewModel_ItemQuality*)Object;
	FGameplayTag& Value = *(FGameplayTag*)InValue;
	Obj->SetQualityTag(Value);
}
void UViewModel_ItemQuality::SetQualityText_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemQuality* Obj = (UViewModel_ItemQuality*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetQualityText(Value);
}
void UViewModel_ItemQuality::SetQualityColor_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemQuality* Obj = (UViewModel_ItemQuality*)Object;
	FLinearColor& Value = *(FLinearColor*)InValue;
	Obj->SetQualityColor(Value);
}
void UViewModel_ItemQuality::StaticRegisterNativesUViewModel_ItemQuality()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_ItemQuality);
UClass* Z_Construct_UClass_UViewModel_ItemQuality_NoRegister()
{
	return UViewModel_ItemQuality::StaticClass();
}
struct Z_Construct_UClass_UViewModel_ItemQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides details about an item's quality.\n */" },
		{ "DisplayName", "Item Quality" },
		{ "IncludePath", "UI/Viewmodels/ViewModel_ItemQuality.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemQuality.h" },
		{ "ToolTip", "Provides details about an item's quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityTag_MetaData[] = {
		{ "Categories", "Inventory.Quality" },
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** The Gameplay Tag representing the quality. Applied to the asset tags too. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemQuality.h" },
		{ "ToolTip", "The Gameplay Tag representing the quality. Applied to the asset tags too." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityText_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Localized text for this item's quality. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemQuality.h" },
		{ "ToolTip", "Localized text for this item's quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityColor_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** A color that represents this quality. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemQuality.h" },
		{ "ToolTip", "A color that represents this quality." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QualityTag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QualityText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QualityColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_ItemQuality>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UViewModel_ItemQuality_Statics::NewProp_QualityTag = { "QualityTag", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemQuality::SetQualityTag_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemQuality, QualityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityTag_MetaData), NewProp_QualityTag_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UViewModel_ItemQuality_Statics::NewProp_QualityText = { "QualityText", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemQuality::SetQualityText_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemQuality, QualityText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityText_MetaData), NewProp_QualityText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UViewModel_ItemQuality_Statics::NewProp_QualityColor = { "QualityColor", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemQuality::SetQualityColor_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemQuality, QualityColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityColor_MetaData), NewProp_QualityColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_ItemQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemQuality_Statics::NewProp_QualityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemQuality_Statics::NewProp_QualityText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemQuality_Statics::NewProp_QualityColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemQuality_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_ItemQuality_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemQuality_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_ItemQuality_Statics::ClassParams = {
	&UViewModel_ItemQuality::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UViewModel_ItemQuality_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemQuality_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemQuality_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_ItemQuality_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_ItemQuality()
{
	if (!Z_Registration_Info_UClass_UViewModel_ItemQuality.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_ItemQuality.OuterSingleton, Z_Construct_UClass_UViewModel_ItemQuality_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_ItemQuality.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UViewModel_ItemQuality>()
{
	return UViewModel_ItemQuality::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_ItemQuality);
UViewModel_ItemQuality::~UViewModel_ItemQuality() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemQuality, QualityTag)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemQuality, QualityText)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemQuality, QualityColor)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_ItemQuality)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemQuality, QualityTag)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemQuality, QualityText)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemQuality, QualityColor)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_ItemQuality);
// End Class UViewModel_ItemQuality

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemQuality_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_ItemQuality, UViewModel_ItemQuality::StaticClass, TEXT("UViewModel_ItemQuality"), &Z_Registration_Info_UClass_UViewModel_ItemQuality, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_ItemQuality), 3100644266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemQuality_h_1135473561(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemQuality_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemQuality_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
