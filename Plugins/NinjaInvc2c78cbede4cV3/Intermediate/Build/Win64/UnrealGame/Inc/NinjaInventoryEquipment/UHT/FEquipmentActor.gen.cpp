// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipmentActor.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEquipmentActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_NoRegister();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentActor();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin ScriptStruct FEquipmentActor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentActor;
class UScriptStruct* FEquipmentActor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentActor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentActor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentActor, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryEquipment(), TEXT("EquipmentActor"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentActor.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UScriptStruct* StaticStruct<FEquipmentActor>()
{
	return FEquipmentActor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEquipmentActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines an actor related to an equipment piece.\n */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentActor.h" },
		{ "ToolTip", "Defines an actor related to an equipment piece." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Actor class to spawn. Must be a valid implementation of \"EquipmentActorInterface\". */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentActor.h" },
		{ "MustImplement", "/Script/NinjaInventoryEquipment.EquipmentActorInterface" },
		{ "ToolTip", "Actor class to spawn. Must be a valid implementation of \"EquipmentActorInterface\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponentSelectorClass_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Selector for the scene component used to attach the actor. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentActor.h" },
		{ "ToolTip", "Selector for the scene component used to attach the actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[] = {
		{ "Categories", "Equipment.Slot" },
		{ "Category", "Actor" },
		{ "Comment", "/**\n\x09 * Gameplay Tag representing the slot used to attach the actor (i.e. Equipment.Slot.MainWeapon).\n\x09 * It should be mapped to an actual socket in the Equipment Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentActor.h" },
		{ "ToolTip", "Gameplay Tag representing the slot used to attach the actor (i.e. Equipment.Slot.MainWeapon).\nIt should be mapped to an actual socket in the Equipment Manager." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SceneComponentSelectorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentActor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FEquipmentActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentActor, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FEquipmentActor_Statics::NewProp_SceneComponentSelectorClass = { "SceneComponentSelectorClass", nullptr, (EPropertyFlags)0x0014000002010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentActor, SceneComponentSelectorClass), Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponentSelectorClass_MetaData), NewProp_SceneComponentSelectorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentActor_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentActor, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTag_MetaData), NewProp_SlotTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentActor_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentActor_Statics::NewProp_SceneComponentSelectorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentActor_Statics::NewProp_SlotTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentActor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
	nullptr,
	&NewStructOps,
	"EquipmentActor",
	Z_Construct_UScriptStruct_FEquipmentActor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentActor_Statics::PropPointers),
	sizeof(FEquipmentActor),
	alignof(FEquipmentActor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentActor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentActor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentActor()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentActor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentActor.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentActor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentActor.InnerSingleton;
}
// End ScriptStruct FEquipmentActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentActor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEquipmentActor::StaticStruct, Z_Construct_UScriptStruct_FEquipmentActor_Statics::NewStructOps, TEXT("EquipmentActor"), &Z_Registration_Info_UScriptStruct_EquipmentActor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentActor), 3415121021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentActor_h_2948047276(TEXT("/Script/NinjaInventoryEquipment"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentActor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
