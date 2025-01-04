// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Animation/Notifies/AnimNotify_OpportunityDamage.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_OpportunityDamage() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_OpportunityDamage();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_OpportunityDamage_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimNotify();
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UAnimNotify_OpportunityDamage
void UAnimNotify_OpportunityDamage::StaticRegisterNativesUAnimNotify_OpportunityDamage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_OpportunityDamage);
UClass* Z_Construct_UClass_UAnimNotify_OpportunityDamage_NoRegister()
{
	return UAnimNotify_OpportunityDamage::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Applies Opportunity Damage to a target.\n */" },
		{ "DisplayName", "Opportunity Damage" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/Notifies/AnimNotify_OpportunityDamage.h" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_OpportunityDamage.h" },
		{ "ToolTip", "Applies Opportunity Damage to a target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Opportunity Event" },
		{ "Comment", "/** Determines if this hit happens from the owner or from a weapon. */" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_OpportunityDamage.h" },
		{ "ToolTip", "Determines if this hit happens from the owner or from a weapon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponQuery_MetaData[] = {
		{ "Category", "Opportunity Event" },
		{ "Comment", "/** Query used to retrieve the backing weapon. */" },
		{ "EditCondition", "Source == ECombatAbilitySource::Weapon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_OpportunityDamage.h" },
		{ "ToolTip", "Query used to retrieve the backing weapon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "Opportunity Event" },
		{ "Comment", "/** Damage Gameplay effect applied when this damage happens. */" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_OpportunityDamage.h" },
		{ "ToolTip", "Damage Gameplay effect applied when this damage happens." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponQuery;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_OpportunityDamage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_OpportunityDamage, Source), Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 3452595870
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::NewProp_WeaponQuery = { "WeaponQuery", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_OpportunityDamage, WeaponQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponQuery_MetaData), NewProp_WeaponQuery_MetaData) }; // 572225232
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0014000002000011, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_OpportunityDamage, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::NewProp_WeaponQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::NewProp_DamageEffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::ClassParams = {
	&UAnimNotify_OpportunityDamage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_OpportunityDamage()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_OpportunityDamage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_OpportunityDamage.OuterSingleton, Z_Construct_UClass_UAnimNotify_OpportunityDamage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_OpportunityDamage.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAnimNotify_OpportunityDamage>()
{
	return UAnimNotify_OpportunityDamage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_OpportunityDamage);
UAnimNotify_OpportunityDamage::~UAnimNotify_OpportunityDamage() {}
// End Class UAnimNotify_OpportunityDamage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_OpportunityDamage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_OpportunityDamage, UAnimNotify_OpportunityDamage::StaticClass, TEXT("UAnimNotify_OpportunityDamage"), &Z_Registration_Info_UClass_UAnimNotify_OpportunityDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_OpportunityDamage), 4007456780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_OpportunityDamage_h_3191033555(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_OpportunityDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_OpportunityDamage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
