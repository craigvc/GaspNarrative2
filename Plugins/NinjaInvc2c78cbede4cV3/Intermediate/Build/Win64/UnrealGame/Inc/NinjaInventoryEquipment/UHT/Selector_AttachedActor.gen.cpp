// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/GameFramework/Selectors/Selector_AttachedActor.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelector_AttachedActor() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_USelector_AttachedActor();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_USelector_AttachedActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Class USelector_AttachedActor
void USelector_AttachedActor::StaticRegisterNativesUSelector_AttachedActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelector_AttachedActor);
UClass* Z_Construct_UClass_USelector_AttachedActor_NoRegister()
{
	return USelector_AttachedActor::StaticClass();
}
struct Z_Construct_UClass_USelector_AttachedActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Selects a component in an attached actor, by a given component tag.\n */" },
		{ "DisplayName", "Attached Actor Selector" },
		{ "IncludePath", "GameFramework/Selectors/Selector_AttachedActor.h" },
		{ "ModuleRelativePath", "Public/GameFramework/Selectors/Selector_AttachedActor.h" },
		{ "ToolTip", "Selects a component in an attached actor, by a given component tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTag_MetaData[] = {
		{ "Categories", "Equipment.Component" },
		{ "Category", "Scene Component Selector" },
		{ "Comment", "/** A gameplay tag used to filter a scene component in the attached actors. */" },
		{ "ModuleRelativePath", "Public/GameFramework/Selectors/Selector_AttachedActor.h" },
		{ "ToolTip", "A gameplay tag used to filter a scene component in the attached actors." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelector_AttachedActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USelector_AttachedActor_Statics::NewProp_ComponentTag = { "ComponentTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelector_AttachedActor, ComponentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTag_MetaData), NewProp_ComponentTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelector_AttachedActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelector_AttachedActor_Statics::NewProp_ComponentTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelector_AttachedActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USelector_AttachedActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelector_AttachedActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USelector_AttachedActor_Statics::ClassParams = {
	&USelector_AttachedActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USelector_AttachedActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USelector_AttachedActor_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelector_AttachedActor_Statics::Class_MetaDataParams), Z_Construct_UClass_USelector_AttachedActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USelector_AttachedActor()
{
	if (!Z_Registration_Info_UClass_USelector_AttachedActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelector_AttachedActor.OuterSingleton, Z_Construct_UClass_USelector_AttachedActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USelector_AttachedActor.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<USelector_AttachedActor>()
{
	return USelector_AttachedActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USelector_AttachedActor);
USelector_AttachedActor::~USelector_AttachedActor() {}
// End Class USelector_AttachedActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_Selectors_Selector_AttachedActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USelector_AttachedActor, USelector_AttachedActor::StaticClass, TEXT("USelector_AttachedActor"), &Z_Registration_Info_UClass_USelector_AttachedActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelector_AttachedActor), 3759610580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_Selectors_Selector_AttachedActor_h_2064394072(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_Selectors_Selector_AttachedActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_Selectors_Selector_AttachedActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
