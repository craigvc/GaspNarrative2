// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Combo/NinjaCombatComboComponentSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatComboComponentSchema() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeComponentSchema();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatComboComponentSchema();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatComboComponentSchema_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatComboComponentSchema
void UNinjaCombatComboComponentSchema::StaticRegisterNativesUNinjaCombatComboComponentSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatComboComponentSchema);
UClass* Z_Construct_UClass_UNinjaCombatComboComponentSchema_NoRegister()
{
	return UNinjaCombatComboComponentSchema::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatComboComponentSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * State Tree schema to be used with the Combo Manager Component.\n *\n * It ensures the owner is a valid implementation of the Combat Combo Manager Component.\n */" },
		{ "CommonSchema", "" },
		{ "DisplayName", "Combat Combo" },
		{ "IncludePath", "AbilitySystem/Combo/NinjaCombatComboComponentSchema.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/NinjaCombatComboComponentSchema.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "State Tree schema to be used with the Combo Manager Component.\n\nIt ensures the owner is a valid implementation of the Combat Combo Manager Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManagerClass_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Actor Component implementing the Combo Manager Component. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/NinjaCombatComboComponentSchema.h" },
		{ "MustImplement", "/Script/NinjaCombat.CombatComboManagerInterface" },
		{ "ToolTip", "Actor Component implementing the Combo Manager Component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComboManagerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatComboComponentSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaCombatComboComponentSchema_Statics::NewProp_ComboManagerClass = { "ComboManagerClass", nullptr, (EPropertyFlags)0x0024080002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatComboComponentSchema, ComboManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManagerClass_MetaData), NewProp_ComboManagerClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatComboComponentSchema_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatComboComponentSchema_Statics::NewProp_ComboManagerClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatComboComponentSchema_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatComboComponentSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateTreeComponentSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatComboComponentSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatComboComponentSchema_Statics::ClassParams = {
	&UNinjaCombatComboComponentSchema::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaCombatComboComponentSchema_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatComboComponentSchema_Statics::PropPointers),
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatComboComponentSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatComboComponentSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatComboComponentSchema()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatComboComponentSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatComboComponentSchema.OuterSingleton, Z_Construct_UClass_UNinjaCombatComboComponentSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatComboComponentSchema.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatComboComponentSchema>()
{
	return UNinjaCombatComboComponentSchema::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatComboComponentSchema);
UNinjaCombatComboComponentSchema::~UNinjaCombatComboComponentSchema() {}
// End Class UNinjaCombatComboComponentSchema

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_NinjaCombatComboComponentSchema_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatComboComponentSchema, UNinjaCombatComboComponentSchema::StaticClass, TEXT("UNinjaCombatComboComponentSchema"), &Z_Registration_Info_UClass_UNinjaCombatComboComponentSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatComboComponentSchema), 2388983889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_NinjaCombatComboComponentSchema_h_3144931796(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_NinjaCombatComboComponentSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_NinjaCombatComboComponentSchema_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
