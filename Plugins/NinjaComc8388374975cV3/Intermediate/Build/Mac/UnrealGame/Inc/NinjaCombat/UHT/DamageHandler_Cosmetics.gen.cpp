// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Damage/Handlers/DamageHandler_Cosmetics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageHandler_Cosmetics() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UDamageHandler_Cosmetics();
NINJACOMBAT_API UClass* Z_Construct_UClass_UDamageHandler_Cosmetics_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDamageHandler();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UDamageHandler_Cosmetics
void UDamageHandler_Cosmetics::StaticRegisterNativesUDamageHandler_Cosmetics()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageHandler_Cosmetics);
UClass* Z_Construct_UClass_UDamageHandler_Cosmetics_NoRegister()
{
	return UDamageHandler_Cosmetics::StaticClass();
}
struct Z_Construct_UClass_UDamageHandler_Cosmetics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Invokes the damage cosmetics interfaces in the causer and instigator for melee and ranged hits.\n */" },
		{ "DisplayName", "Combat Interfaces" },
		{ "IncludePath", "Damage/Handlers/DamageHandler_Cosmetics.h" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_Cosmetics.h" },
		{ "ToolTip", "Invokes the damage cosmetics interfaces in the causer and instigator for melee and ranged hits." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandleMeleeDamage_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/**\n\x09 * Determines if the Melee Damage interface should be invoked.\n\x09 * You may want to turn this off if your weapons are already handling impact cosmetics.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_Cosmetics.h" },
		{ "ToolTip", "Determines if the Melee Damage interface should be invoked.\nYou may want to turn this off if your weapons are already handling impact cosmetics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandleProjectileImpact_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/**\n\x09 * Determines if the Ranged Damage interface should be invoked.\n\x09 * You may want to turn this off if your projectiles are already handling impact cosmetics.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_Cosmetics.h" },
		{ "ToolTip", "Determines if the Ranged Damage interface should be invoked.\nYou may want to turn this off if your projectiles are already handling impact cosmetics." },
	};
#endif // WITH_METADATA
	static void NewProp_bHandleMeleeDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandleMeleeDamage;
	static void NewProp_bHandleProjectileImpact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandleProjectileImpact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageHandler_Cosmetics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::NewProp_bHandleMeleeDamage_SetBit(void* Obj)
{
	((UDamageHandler_Cosmetics*)Obj)->bHandleMeleeDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::NewProp_bHandleMeleeDamage = { "bHandleMeleeDamage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDamageHandler_Cosmetics), &Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::NewProp_bHandleMeleeDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandleMeleeDamage_MetaData), NewProp_bHandleMeleeDamage_MetaData) };
void Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::NewProp_bHandleProjectileImpact_SetBit(void* Obj)
{
	((UDamageHandler_Cosmetics*)Obj)->bHandleProjectileImpact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::NewProp_bHandleProjectileImpact = { "bHandleProjectileImpact", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDamageHandler_Cosmetics), &Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::NewProp_bHandleProjectileImpact_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandleProjectileImpact_MetaData), NewProp_bHandleProjectileImpact_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::NewProp_bHandleMeleeDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::NewProp_bHandleProjectileImpact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatDamageHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::ClassParams = {
	&UDamageHandler_Cosmetics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::PropPointers),
	0,
	0x003110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageHandler_Cosmetics()
{
	if (!Z_Registration_Info_UClass_UDamageHandler_Cosmetics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageHandler_Cosmetics.OuterSingleton, Z_Construct_UClass_UDamageHandler_Cosmetics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageHandler_Cosmetics.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UDamageHandler_Cosmetics>()
{
	return UDamageHandler_Cosmetics::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageHandler_Cosmetics);
UDamageHandler_Cosmetics::~UDamageHandler_Cosmetics() {}
// End Class UDamageHandler_Cosmetics

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_Cosmetics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageHandler_Cosmetics, UDamageHandler_Cosmetics::StaticClass, TEXT("UDamageHandler_Cosmetics"), &Z_Registration_Info_UClass_UDamageHandler_Cosmetics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageHandler_Cosmetics), 516642458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_Cosmetics_h_2866329652(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_Cosmetics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_Cosmetics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
