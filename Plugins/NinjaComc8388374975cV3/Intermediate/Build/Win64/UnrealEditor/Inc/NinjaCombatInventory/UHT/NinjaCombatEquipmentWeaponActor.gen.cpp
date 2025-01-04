// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatInventory/Public/GameFramework/NinjaCombatEquipmentWeaponActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatEquipmentWeaponActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_ANinjaCombatWeaponActor();
NINJACOMBATINVENTORY_API UClass* Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor();
NINJACOMBATINVENTORY_API UClass* Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatInventory();
// End Cross Module References

// Begin Class ANinjaCombatEquipmentWeaponActor
void ANinjaCombatEquipmentWeaponActor::StaticRegisterNativesANinjaCombatEquipmentWeaponActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaCombatEquipmentWeaponActor);
UClass* Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_NoRegister()
{
	return ANinjaCombatEquipmentWeaponActor::StaticClass();
}
struct Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A weapon actor that is prepared to be used as Equipment, from the Ninja Inventory.\n */" },
		{ "IncludePath", "GameFramework/NinjaCombatEquipmentWeaponActor.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatEquipmentWeaponActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A weapon actor that is prepared to be used as Equipment, from the Ninja Inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseItemLevelAsEffectLevel_MetaData[] = {
		{ "Category", "Weapon|Equipment" },
		{ "Comment", "/** If set to true, uses the Item Level as the Effect Level for Melee or Projectiles. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatEquipmentWeaponActor.h" },
		{ "ToolTip", "If set to true, uses the Item Level as the Effect Level for Melee or Projectiles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentReceiver_MetaData[] = {
		{ "Comment", "/** The Equipment Receiver, most likely provided by the Inventory System. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatEquipmentWeaponActor.h" },
		{ "ToolTip", "The Equipment Receiver, most likely provided by the Inventory System." },
	};
#endif // WITH_METADATA
	static void NewProp_bUseItemLevelAsEffectLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseItemLevelAsEffectLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentReceiver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaCombatEquipmentWeaponActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::NewProp_bUseItemLevelAsEffectLevel_SetBit(void* Obj)
{
	((ANinjaCombatEquipmentWeaponActor*)Obj)->bUseItemLevelAsEffectLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::NewProp_bUseItemLevelAsEffectLevel = { "bUseItemLevelAsEffectLevel", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANinjaCombatEquipmentWeaponActor), &Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::NewProp_bUseItemLevelAsEffectLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseItemLevelAsEffectLevel_MetaData), NewProp_bUseItemLevelAsEffectLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::NewProp_EquipmentReceiver = { "EquipmentReceiver", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatEquipmentWeaponActor, EquipmentReceiver), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentReceiver_MetaData), NewProp_EquipmentReceiver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::NewProp_bUseItemLevelAsEffectLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::NewProp_EquipmentReceiver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANinjaCombatWeaponActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::ClassParams = {
	&ANinjaCombatEquipmentWeaponActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor()
{
	if (!Z_Registration_Info_UClass_ANinjaCombatEquipmentWeaponActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaCombatEquipmentWeaponActor.OuterSingleton, Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaCombatEquipmentWeaponActor.OuterSingleton;
}
template<> NINJACOMBATINVENTORY_API UClass* StaticClass<ANinjaCombatEquipmentWeaponActor>()
{
	return ANinjaCombatEquipmentWeaponActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaCombatEquipmentWeaponActor);
ANinjaCombatEquipmentWeaponActor::~ANinjaCombatEquipmentWeaponActor() {}
// End Class ANinjaCombatEquipmentWeaponActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatInventory_Public_GameFramework_NinjaCombatEquipmentWeaponActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaCombatEquipmentWeaponActor, ANinjaCombatEquipmentWeaponActor::StaticClass, TEXT("ANinjaCombatEquipmentWeaponActor"), &Z_Registration_Info_UClass_ANinjaCombatEquipmentWeaponActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaCombatEquipmentWeaponActor), 1666020613U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatInventory_Public_GameFramework_NinjaCombatEquipmentWeaponActor_h_2980041763(TEXT("/Script/NinjaCombatInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatInventory_Public_GameFramework_NinjaCombatEquipmentWeaponActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatInventory_Public_GameFramework_NinjaCombatEquipmentWeaponActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
