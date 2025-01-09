// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Items/GameplayEffectItem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UGameplayEffectItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UGameplayEffectItem_NoRegister();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeItem();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UGameplayEffectItem
void UGameplayEffectItem::StaticRegisterNativesUGameplayEffectItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectItem);
UClass* Z_Construct_UClass_UGameplayEffectItem_NoRegister()
{
	return UGameplayEffectItem::StaticClass();
}
struct Z_Construct_UClass_UGameplayEffectItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A \"consumable\" item that applies the selected gameplay effect to the user when consumed. Great for potions, food, bandages, etc. Can technically be non-consumable via unchecking consume on use if you want a re-usable item that applies a GE \n */" },
		{ "IncludePath", "Items/GameplayEffectItem.h" },
		{ "ModuleRelativePath", "Public/Items/GameplayEffectItem.h" },
		{ "ToolTip", "A \"consumable\" item that applies the selected gameplay effect to the user when consumed. Great for potions, food, bandages, etc. Can technically be non-consumable via unchecking consume on use if you want a re-usable item that applies a GE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectClass_MetaData[] = {
		{ "Category", "Equippable" },
		{ "Comment", "// Default attributes for a character for initializing on spawn/respawn.\n// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.\n" },
		{ "ModuleRelativePath", "Public/Items/GameplayEffectItem.h" },
		{ "ToolTip", "Default attributes for a character for initializing on spawn/respawn.\nThis is an instant GE that overrides the values for attributes that get reset on spawn/respawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetByCallerValues_MetaData[] = {
		{ "Categories", "SetByCaller" },
		{ "Category", "Equippable" },
		{ "Comment", "/** A list of all the set by caller tags, along with the values we should set them to. */" },
		{ "ModuleRelativePath", "Public/Items/GameplayEffectItem.h" },
		{ "ToolTip", "A list of all the set by caller tags, along with the values we should set them to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SetByCallerValues_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SetByCallerValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SetByCallerValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayEffectItem_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffectItem, GameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectClass_MetaData), NewProp_GameplayEffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayEffectItem_Statics::NewProp_SetByCallerValues_ValueProp = { "SetByCallerValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffectItem_Statics::NewProp_SetByCallerValues_Key_KeyProp = { "SetByCallerValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameplayEffectItem_Statics::NewProp_SetByCallerValues = { "SetByCallerValues", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffectItem, SetByCallerValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetByCallerValues_MetaData), NewProp_SetByCallerValues_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayEffectItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectItem_Statics::NewProp_GameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectItem_Statics::NewProp_SetByCallerValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectItem_Statics::NewProp_SetByCallerValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectItem_Statics::NewProp_SetByCallerValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayEffectItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectItem_Statics::ClassParams = {
	&UGameplayEffectItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayEffectItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayEffectItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayEffectItem()
{
	if (!Z_Registration_Info_UClass_UGameplayEffectItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectItem.OuterSingleton, Z_Construct_UClass_UGameplayEffectItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayEffectItem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UGameplayEffectItem>()
{
	return UGameplayEffectItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectItem);
UGameplayEffectItem::~UGameplayEffectItem() {}
// End Class UGameplayEffectItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_GameplayEffectItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffectItem, UGameplayEffectItem::StaticClass, TEXT("UGameplayEffectItem"), &Z_Registration_Info_UClass_UGameplayEffectItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectItem), 2043838912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_GameplayEffectItem_h_3846582871(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_GameplayEffectItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_GameplayEffectItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
