// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Damage/Handlers/DamageHandler_Dissolve.h"
#include "NinjaCombat/Public/Interfaces/Components/CombatDissolveManagerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageHandler_Dissolve() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UDamageHandler_Dissolve();
NINJACOMBAT_API UClass* Z_Construct_UClass_UDamageHandler_Dissolve_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDamageHandler();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDissolveMaterialParameter();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UDamageHandler_Dissolve
void UDamageHandler_Dissolve::StaticRegisterNativesUDamageHandler_Dissolve()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageHandler_Dissolve);
UClass* Z_Construct_UClass_UDamageHandler_Dissolve_NoRegister()
{
	return UDamageHandler_Dissolve::StaticClass();
}
struct Z_Construct_UClass_UDamageHandler_Dissolve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Executes a dissolve effect based on a material's parameter and dissolve curve.\n *\n * Meant to be executed on fatal damage.\n *\n * It also uses the \"Dissolve Manager\" interface, usually implemented by a component,\n * to actually perform the dissolve, since that requires some sort of tick. Keep in\n * mind that the default Damage Handler implements this interface by default.\n */" },
		{ "DisplayName", "Dissolve" },
		{ "IncludePath", "Damage/Handlers/DamageHandler_Dissolve.h" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_Dissolve.h" },
		{ "ToolTip", "Executes a dissolve effect based on a material's parameter and dissolve curve.\n\nMeant to be executed on fatal damage.\n\nIt also uses the \"Dissolve Manager\" interface, usually implemented by a component,\nto actually perform the dissolve, since that requires some sort of tick. Keep in\nmind that the default Damage Handler implements this interface by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveSettings_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/** Parameters used for the dissolve material. */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_Dissolve.h" },
		{ "TitleProperty", "ParameterName" },
		{ "ToolTip", "Parameters used for the dissolve material." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DissolveSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DissolveSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageHandler_Dissolve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDamageHandler_Dissolve_Statics::NewProp_DissolveSettings_Inner = { "DissolveSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDissolveMaterialParameter, METADATA_PARAMS(0, nullptr) }; // 4088481081
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDamageHandler_Dissolve_Statics::NewProp_DissolveSettings = { "DissolveSettings", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageHandler_Dissolve, DissolveSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveSettings_MetaData), NewProp_DissolveSettings_MetaData) }; // 4088481081
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageHandler_Dissolve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageHandler_Dissolve_Statics::NewProp_DissolveSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageHandler_Dissolve_Statics::NewProp_DissolveSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_Dissolve_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDamageHandler_Dissolve_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatDamageHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_Dissolve_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageHandler_Dissolve_Statics::ClassParams = {
	&UDamageHandler_Dissolve::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDamageHandler_Dissolve_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_Dissolve_Statics::PropPointers),
	0,
	0x003110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_Dissolve_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageHandler_Dissolve_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageHandler_Dissolve()
{
	if (!Z_Registration_Info_UClass_UDamageHandler_Dissolve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageHandler_Dissolve.OuterSingleton, Z_Construct_UClass_UDamageHandler_Dissolve_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageHandler_Dissolve.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UDamageHandler_Dissolve>()
{
	return UDamageHandler_Dissolve::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageHandler_Dissolve);
UDamageHandler_Dissolve::~UDamageHandler_Dissolve() {}
// End Class UDamageHandler_Dissolve

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_Dissolve_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageHandler_Dissolve, UDamageHandler_Dissolve::StaticClass, TEXT("UDamageHandler_Dissolve"), &Z_Registration_Info_UClass_UDamageHandler_Dissolve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageHandler_Dissolve), 2615976725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_Dissolve_h_872952891(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_Dissolve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_Dissolve_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
