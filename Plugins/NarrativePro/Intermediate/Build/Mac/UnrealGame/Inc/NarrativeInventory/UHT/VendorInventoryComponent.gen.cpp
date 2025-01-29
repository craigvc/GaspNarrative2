// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeInventory/Public/VendorInventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVendorInventoryComponent() {}

// Begin Cross Module References
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeInventoryComponent();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UVendorInventoryComponent();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UVendorInventoryComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeInventory();
// End Cross Module References

// Begin Class UVendorInventoryComponent
void UVendorInventoryComponent::StaticRegisterNativesUVendorInventoryComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVendorInventoryComponent);
UClass* Z_Construct_UClass_UVendorInventoryComponent_NoRegister()
{
	return UVendorInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UVendorInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**\n * A special type of inventory you should use for vendors. Vendors are essentially just lootable containers, however looting/storing items\n * will consume/remove currency from the player and vendors when the looting occurs. The UI will also display prices. \n */" },
		{ "DisplayName", "Narrative Vendor Inventory" },
		{ "IncludePath", "VendorInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/VendorInventoryComponent.h" },
		{ "ToolTip", "A special type of inventory you should use for vendors. Vendors are essentially just lootable containers, however looting/storing items\nwill consume/remove currency from the player and vendors when the looting occurs. The UI will also display prices." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVendorInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVendorInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeInventoryComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVendorInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVendorInventoryComponent_Statics::ClassParams = {
	&UVendorInventoryComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVendorInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVendorInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVendorInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UVendorInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVendorInventoryComponent.OuterSingleton, Z_Construct_UClass_UVendorInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVendorInventoryComponent.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UClass* StaticClass<UVendorInventoryComponent>()
{
	return UVendorInventoryComponent::StaticClass();
}
UVendorInventoryComponent::UVendorInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVendorInventoryComponent);
UVendorInventoryComponent::~UVendorInventoryComponent() {}
// End Class UVendorInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_VendorInventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVendorInventoryComponent, UVendorInventoryComponent::StaticClass, TEXT("UVendorInventoryComponent"), &Z_Registration_Info_UClass_UVendorInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVendorInventoryComponent), 2662411400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_VendorInventoryComponent_h_971036457(TEXT("/Script/NarrativeInventory"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_VendorInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_VendorInventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
