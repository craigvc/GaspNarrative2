// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/CharacterCreator/Items/CharacterCreatorItem_Groom.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCreatorItem_Groom() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorItem_Groom();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorItem_Groom_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UCharacterCreatorItem_Groom
void UCharacterCreatorItem_Groom::StaticRegisterNativesUCharacterCreatorItem_Groom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterCreatorItem_Groom);
UClass* Z_Construct_UClass_UCharacterCreatorItem_Groom_NoRegister()
{
	return UCharacterCreatorItem_Groom::StaticClass();
}
struct Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CharacterCreator/Items/CharacterCreatorItem_Groom.h" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Groom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Slot.Groom" },
		{ "Category", "Groom" },
		{ "Comment", "//The slot this groom will apply itself to \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Groom.h" },
		{ "ToolTip", "The slot this groom will apply itself to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Groom_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//The groom this item applies\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Groom.h" },
		{ "ToolTip", "The groom this item applies" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomBinding_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//The groom binding this item applies\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Groom.h" },
		{ "ToolTip", "The groom binding this item applies" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Groom;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GroomBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCreatorItem_Groom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorItem_Groom, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 1298103297
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::NewProp_Groom = { "Groom", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorItem_Groom, Groom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Groom_MetaData), NewProp_Groom_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::NewProp_GroomBinding = { "GroomBinding", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorItem_Groom, GroomBinding), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomBinding_MetaData), NewProp_GroomBinding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::NewProp_Groom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::NewProp_GroomBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterCreatorItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::ClassParams = {
	&UCharacterCreatorItem_Groom::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterCreatorItem_Groom()
{
	if (!Z_Registration_Info_UClass_UCharacterCreatorItem_Groom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterCreatorItem_Groom.OuterSingleton, Z_Construct_UClass_UCharacterCreatorItem_Groom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterCreatorItem_Groom.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterCreatorItem_Groom>()
{
	return UCharacterCreatorItem_Groom::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCreatorItem_Groom);
UCharacterCreatorItem_Groom::~UCharacterCreatorItem_Groom() {}
// End Class UCharacterCreatorItem_Groom

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Items_CharacterCreatorItem_Groom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterCreatorItem_Groom, UCharacterCreatorItem_Groom::StaticClass, TEXT("UCharacterCreatorItem_Groom"), &Z_Registration_Info_UClass_UCharacterCreatorItem_Groom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterCreatorItem_Groom), 2383672019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Items_CharacterCreatorItem_Groom_h_3669983037(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Items_CharacterCreatorItem_Groom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Items_CharacterCreatorItem_Groom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
