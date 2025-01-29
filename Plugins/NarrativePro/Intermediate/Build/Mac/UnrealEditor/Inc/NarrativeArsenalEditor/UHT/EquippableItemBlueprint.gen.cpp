// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenalEditor/Private/EquippableItemBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquippableItemBlueprint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UClothingItemBlueprint();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UClothingItemBlueprint_NoRegister();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UEquippableItemBlueprint();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UEquippableItemBlueprint_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenalEditor();
// End Cross Module References

// Begin Class UEquippableItemBlueprint
void UEquippableItemBlueprint::StaticRegisterNativesUEquippableItemBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquippableItemBlueprint);
UClass* Z_Construct_UClass_UEquippableItemBlueprint_NoRegister()
{
	return UEquippableItemBlueprint::StaticClass();
}
struct Z_Construct_UClass_UEquippableItemBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for an equippable item the player can put on. Networking is built right in - just override HandleEquip/HandleUnequip to define what your equippable should do! Requires EquipmentComponent to be added to your pawn. \n * \n * For equippable clothing items see the already implemented ClothingItem that comes with Narrative Inventory. \n */" },
		{ "IncludePath", "EquippableItemBlueprint.h" },
		{ "ModuleRelativePath", "Private/EquippableItemBlueprint.h" },
		{ "ToolTip", "The base class for an equippable item the player can put on. Networking is built right in - just override HandleEquip/HandleUnequip to define what your equippable should do! Requires EquipmentComponent to be added to your pawn.\n\nFor equippable clothing items see the already implemented ClothingItem that comes with Narrative Inventory." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquippableItemBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEquippableItemBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenalEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItemBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquippableItemBlueprint_Statics::ClassParams = {
	&UEquippableItemBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItemBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquippableItemBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquippableItemBlueprint()
{
	if (!Z_Registration_Info_UClass_UEquippableItemBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquippableItemBlueprint.OuterSingleton, Z_Construct_UClass_UEquippableItemBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquippableItemBlueprint.OuterSingleton;
}
template<> NARRATIVEARSENALEDITOR_API UClass* StaticClass<UEquippableItemBlueprint>()
{
	return UEquippableItemBlueprint::StaticClass();
}
UEquippableItemBlueprint::UEquippableItemBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquippableItemBlueprint);
UEquippableItemBlueprint::~UEquippableItemBlueprint() {}
// End Class UEquippableItemBlueprint

// Begin Class UClothingItemBlueprint
void UClothingItemBlueprint::StaticRegisterNativesUClothingItemBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingItemBlueprint);
UClass* Z_Construct_UClass_UClothingItemBlueprint_NoRegister()
{
	return UClothingItemBlueprint::StaticClass();
}
struct Z_Construct_UClass_UClothingItemBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An Equippable item already set up with some logic - will change the players clothing to the set mesh. \n */" },
		{ "IncludePath", "EquippableItemBlueprint.h" },
		{ "ModuleRelativePath", "Private/EquippableItemBlueprint.h" },
		{ "ToolTip", "An Equippable item already set up with some logic - will change the players clothing to the set mesh." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingItemBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClothingItemBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenalEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingItemBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingItemBlueprint_Statics::ClassParams = {
	&UClothingItemBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingItemBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothingItemBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClothingItemBlueprint()
{
	if (!Z_Registration_Info_UClass_UClothingItemBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingItemBlueprint.OuterSingleton, Z_Construct_UClass_UClothingItemBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothingItemBlueprint.OuterSingleton;
}
template<> NARRATIVEARSENALEDITOR_API UClass* StaticClass<UClothingItemBlueprint>()
{
	return UClothingItemBlueprint::StaticClass();
}
UClothingItemBlueprint::UClothingItemBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingItemBlueprint);
UClothingItemBlueprint::~UClothingItemBlueprint() {}
// End Class UClothingItemBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Private_EquippableItemBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquippableItemBlueprint, UEquippableItemBlueprint::StaticClass, TEXT("UEquippableItemBlueprint"), &Z_Registration_Info_UClass_UEquippableItemBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquippableItemBlueprint), 901545185U) },
		{ Z_Construct_UClass_UClothingItemBlueprint, UClothingItemBlueprint::StaticClass, TEXT("UClothingItemBlueprint"), &Z_Registration_Info_UClass_UClothingItemBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingItemBlueprint), 963132182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Private_EquippableItemBlueprint_h_1950663953(TEXT("/Script/NarrativeArsenalEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Private_EquippableItemBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Private_EquippableItemBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
