// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Components/NinjaCombatDissolveComponent.h"
#include "NinjaCombat/Public/Interfaces/Components/CombatDissolveManagerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatDissolveComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatDissolveManagerInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatBaseComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDissolveComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDissolveComponent_NoRegister();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDissolveMaterialParameter();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatDissolveComponent
void UNinjaCombatDissolveComponent::StaticRegisterNativesUNinjaCombatDissolveComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatDissolveComponent);
UClass* Z_Construct_UClass_UNinjaCombatDissolveComponent_NoRegister()
{
	return UNinjaCombatDissolveComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "NinjaCombat" },
		{ "Comment", "/**\n * Handles a dissolve effect.\n */" },
		{ "IncludePath", "Components/NinjaCombatDissolveComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatDissolveComponent.h" },
		{ "ToolTip", "Handles a dissolve effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDissolveAttachedActors_MetaData[] = {
		{ "Category", "Dissolve" },
		{ "Comment", "/** If set to true, attempts to dissolve attached actors as well. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatDissolveComponent.h" },
		{ "ToolTip", "If set to true, attempts to dissolve attached actors as well." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/NinjaCombatDissolveComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/NinjaCombatDissolveComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDissolveAttachedActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDissolveAttachedActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DissolveSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DissolveSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DissolveMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatDissolveComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::NewProp_bDissolveAttachedActors_SetBit(void* Obj)
{
	((UNinjaCombatDissolveComponent*)Obj)->bDissolveAttachedActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::NewProp_bDissolveAttachedActors = { "bDissolveAttachedActors", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatDissolveComponent), &Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::NewProp_bDissolveAttachedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDissolveAttachedActors_MetaData), NewProp_bDissolveAttachedActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::NewProp_DissolveSettings_Inner = { "DissolveSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDissolveMaterialParameter, METADATA_PARAMS(0, nullptr) }; // 4088481081
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::NewProp_DissolveSettings = { "DissolveSettings", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatDissolveComponent, DissolveSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveSettings_MetaData), NewProp_DissolveSettings_MetaData) }; // 4088481081
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::NewProp_DissolveMaterials_Inner = { "DissolveMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::NewProp_DissolveMaterials = { "DissolveMaterials", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatDissolveComponent, DissolveMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveMaterials_MetaData), NewProp_DissolveMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::NewProp_bDissolveAttachedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::NewProp_DissolveSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::NewProp_DissolveSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::NewProp_DissolveMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::NewProp_DissolveMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatDissolveManagerInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatDissolveComponent, ICombatDissolveManagerInterface), false },  // 1337716620
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::ClassParams = {
	&UNinjaCombatDissolveComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatDissolveComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatDissolveComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatDissolveComponent.OuterSingleton, Z_Construct_UClass_UNinjaCombatDissolveComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatDissolveComponent.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatDissolveComponent>()
{
	return UNinjaCombatDissolveComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatDissolveComponent);
UNinjaCombatDissolveComponent::~UNinjaCombatDissolveComponent() {}
// End Class UNinjaCombatDissolveComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatDissolveComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatDissolveComponent, UNinjaCombatDissolveComponent::StaticClass, TEXT("UNinjaCombatDissolveComponent"), &Z_Registration_Info_UClass_UNinjaCombatDissolveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatDissolveComponent), 3602729093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatDissolveComponent_h_604173269(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatDissolveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatDissolveComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
