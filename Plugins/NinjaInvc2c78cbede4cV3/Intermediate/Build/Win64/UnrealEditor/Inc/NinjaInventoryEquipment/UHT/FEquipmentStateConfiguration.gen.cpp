// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipmentStateConfiguration.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipmentAbilityTypes.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipmentActor.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipmentMeshTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEquipmentStateConfiguration() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentActor();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAnimLayer();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAttributeSet();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentGameplayAbility();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentGameplayEffect();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentSkeletalMesh();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentStateConfiguration();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentStaticMesh();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin ScriptStruct FEquipmentStateConfiguration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentStateConfiguration;
class UScriptStruct* FEquipmentStateConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentStateConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentStateConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentStateConfiguration, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryEquipment(), TEXT("EquipmentStateConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentStateConfiguration.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UScriptStruct* StaticStruct<FEquipmentStateConfiguration>()
{
	return FEquipmentStateConfiguration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Configures aspects that are assigned to an owner, when the equipment is at a certain state.\n */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentStateConfiguration.h" },
		{ "ToolTip", "Configures aspects that are assigned to an owner, when the equipment is at a certain state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTags_MetaData[] = {
		{ "Categories", "Equipment.State" },
		{ "Category", "State Configuration" },
		{ "Comment", "/** States compatible with this configuration. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentStateConfiguration.h" },
		{ "ToolTip", "States compatible with this configuration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnusedSlotTags_MetaData[] = {
		{ "Categories", "Equipment.Slot" },
		{ "Category", "State Configuration" },
		{ "Comment", "/** Any slots that must be cleared. No need to clear slots that are being replaced by this state. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentStateConfiguration.h" },
		{ "ToolTip", "Any slots that must be cleared. No need to clear slots that are being replaced by this state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshes_MetaData[] = {
		{ "Category", "State Configuration" },
		{ "Comment", "/** Skeletal Meshes added to certain slots when this state is active. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentStateConfiguration.h" },
		{ "TitleProperty", "SlotTag" },
		{ "ToolTip", "Skeletal Meshes added to certain slots when this state is active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[] = {
		{ "Category", "State Configuration" },
		{ "Comment", "/** Static Meshes attached to certain sockets when this state is active. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentStateConfiguration.h" },
		{ "TitleProperty", "SlotTag" },
		{ "ToolTip", "Static Meshes attached to certain sockets when this state is active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationLayers_MetaData[] = {
		{ "Category", "State Configuration" },
		{ "Comment", "/** Animation Layers linked to a certain mesh, while this state is active. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentStateConfiguration.h" },
		{ "TitleProperty", "AnimInstanceLayerClass" },
		{ "ToolTip", "Animation Layers linked to a certain mesh, while this state is active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "Category", "State Configuration" },
		{ "Comment", "/** Actors added and attached to certain sockets/components when this state is active. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentStateConfiguration.h" },
		{ "TitleProperty", "ActorClass" },
		{ "ToolTip", "Actors added and attached to certain sockets/components when this state is active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSets_MetaData[] = {
		{ "Category", "State Configuration" },
		{ "Comment", "/** Attribute Sets granted to the equipment owner. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentStateConfiguration.h" },
		{ "TitleProperty", "AttributeSetClass" },
		{ "ToolTip", "Attribute Sets granted to the equipment owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffects_MetaData[] = {
		{ "Category", "State Configuration" },
		{ "Comment", "/** Gameplay Effects granted to the equipment owner. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentStateConfiguration.h" },
		{ "TitleProperty", "GameplayEffectClass" },
		{ "ToolTip", "Gameplay Effects granted to the equipment owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilities_MetaData[] = {
		{ "Category", "State Configuration" },
		{ "Comment", "/** Gameplay Effects granted to the equipment owner. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentStateConfiguration.h" },
		{ "TitleProperty", "GameplayAbilityClass" },
		{ "ToolTip", "Gameplay Effects granted to the equipment owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Containers_MetaData[] = {
		{ "Category", "State Configuration" },
		{ "Comment", "/** All containers granted by this equipment, in this state. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentStateConfiguration.h" },
		{ "ToolTip", "All containers granted by this equipment, in this state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnusedSlotTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalMeshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeSets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayAbilities;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Containers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Containers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentStateConfiguration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_StateTags = { "StateTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentStateConfiguration, StateTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTags_MetaData), NewProp_StateTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_UnusedSlotTags = { "UnusedSlotTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentStateConfiguration, UnusedSlotTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnusedSlotTags_MetaData), NewProp_UnusedSlotTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_SkeletalMeshes_Inner = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEquipmentSkeletalMesh, METADATA_PARAMS(0, nullptr) }; // 1300637625
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_SkeletalMeshes = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentStateConfiguration, SkeletalMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshes_MetaData), NewProp_SkeletalMeshes_MetaData) }; // 1300637625
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_StaticMeshes_Inner = { "StaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEquipmentStaticMesh, METADATA_PARAMS(0, nullptr) }; // 668275448
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentStateConfiguration, StaticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshes_MetaData), NewProp_StaticMeshes_MetaData) }; // 668275448
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_AnimationLayers_Inner = { "AnimationLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEquipmentAnimLayer, METADATA_PARAMS(0, nullptr) }; // 3626532477
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_AnimationLayers = { "AnimationLayers", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentStateConfiguration, AnimationLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationLayers_MetaData), NewProp_AnimationLayers_MetaData) }; // 3626532477
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEquipmentActor, METADATA_PARAMS(0, nullptr) }; // 3415121021
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentStateConfiguration, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) }; // 3415121021
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_AttributeSets_Inner = { "AttributeSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEquipmentAttributeSet, METADATA_PARAMS(0, nullptr) }; // 1145869349
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_AttributeSets = { "AttributeSets", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentStateConfiguration, AttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSets_MetaData), NewProp_AttributeSets_MetaData) }; // 1145869349
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_GameplayEffects_Inner = { "GameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEquipmentGameplayEffect, METADATA_PARAMS(0, nullptr) }; // 2418400249
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_GameplayEffects = { "GameplayEffects", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentStateConfiguration, GameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffects_MetaData), NewProp_GameplayEffects_MetaData) }; // 2418400249
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_GameplayAbilities_Inner = { "GameplayAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEquipmentGameplayAbility, METADATA_PARAMS(0, nullptr) }; // 3607933072
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_GameplayAbilities = { "GameplayAbilities", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentStateConfiguration, GameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayAbilities_MetaData), NewProp_GameplayAbilities_MetaData) }; // 3607933072
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_Containers_Inner = { "Containers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_Containers = { "Containers", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentStateConfiguration, Containers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Containers_MetaData), NewProp_Containers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_StateTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_UnusedSlotTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_SkeletalMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_SkeletalMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_StaticMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_StaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_AnimationLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_AnimationLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_AttributeSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_AttributeSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_GameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_GameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_GameplayAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_GameplayAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_Containers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewProp_Containers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
	nullptr,
	&NewStructOps,
	"EquipmentStateConfiguration",
	Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::PropPointers),
	sizeof(FEquipmentStateConfiguration),
	alignof(FEquipmentStateConfiguration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentStateConfiguration()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentStateConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentStateConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentStateConfiguration.InnerSingleton;
}
// End ScriptStruct FEquipmentStateConfiguration

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentStateConfiguration_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEquipmentStateConfiguration::StaticStruct, Z_Construct_UScriptStruct_FEquipmentStateConfiguration_Statics::NewStructOps, TEXT("EquipmentStateConfiguration"), &Z_Registration_Info_UScriptStruct_EquipmentStateConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentStateConfiguration), 1191437689U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentStateConfiguration_h_1695513125(TEXT("/Script/NinjaInventoryEquipment"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentStateConfiguration_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentStateConfiguration_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
