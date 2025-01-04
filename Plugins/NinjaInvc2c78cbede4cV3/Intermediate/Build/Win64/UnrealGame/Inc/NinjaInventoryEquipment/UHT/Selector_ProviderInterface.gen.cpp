// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/GameFramework/Selectors/Selector_ProviderInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelector_ProviderInterface() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_USelector_ProviderInterface();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_USelector_ProviderInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Class USelector_ProviderInterface
void USelector_ProviderInterface::StaticRegisterNativesUSelector_ProviderInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelector_ProviderInterface);
UClass* Z_Construct_UClass_USelector_ProviderInterface_NoRegister()
{
	return USelector_ProviderInterface::StaticClass();
}
struct Z_Construct_UClass_USelector_ProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Retrieves a scene component via the EquipmentSceneComponentProviderInterface interface.\n */" },
		{ "DisplayName", "Provider Interface Selector" },
		{ "IncludePath", "GameFramework/Selectors/Selector_ProviderInterface.h" },
		{ "ModuleRelativePath", "Public/GameFramework/Selectors/Selector_ProviderInterface.h" },
		{ "ToolTip", "Retrieves a scene component via the EquipmentSceneComponentProviderInterface interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTags_MetaData[] = {
		{ "Category", "Scene Component Selector" },
		{ "Comment", "/** Gameplay Tags used to identify the scene component. */" },
		{ "ModuleRelativePath", "Public/GameFramework/Selectors/Selector_ProviderInterface.h" },
		{ "ToolTip", "Gameplay Tags used to identify the scene component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelector_ProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USelector_ProviderInterface_Statics::NewProp_ComponentTags = { "ComponentTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelector_ProviderInterface, ComponentTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTags_MetaData), NewProp_ComponentTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelector_ProviderInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelector_ProviderInterface_Statics::NewProp_ComponentTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelector_ProviderInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USelector_ProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelector_ProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USelector_ProviderInterface_Statics::ClassParams = {
	&USelector_ProviderInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USelector_ProviderInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USelector_ProviderInterface_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelector_ProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USelector_ProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USelector_ProviderInterface()
{
	if (!Z_Registration_Info_UClass_USelector_ProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelector_ProviderInterface.OuterSingleton, Z_Construct_UClass_USelector_ProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USelector_ProviderInterface.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<USelector_ProviderInterface>()
{
	return USelector_ProviderInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USelector_ProviderInterface);
USelector_ProviderInterface::~USelector_ProviderInterface() {}
// End Class USelector_ProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_Selectors_Selector_ProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USelector_ProviderInterface, USelector_ProviderInterface::StaticClass, TEXT("USelector_ProviderInterface"), &Z_Registration_Info_UClass_USelector_ProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelector_ProviderInterface), 744603341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_Selectors_Selector_ProviderInterface_h_3623463811(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_Selectors_Selector_ProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_Selectors_Selector_ProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
