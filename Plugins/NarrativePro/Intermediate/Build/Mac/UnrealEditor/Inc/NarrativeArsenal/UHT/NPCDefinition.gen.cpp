// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/NPCDefinition.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeNPCCharacter.h"
#include "NarrativeInventory/Public/InventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCDefinition() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Range();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterDefinition();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityConfiguration_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivitySchedule_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedDialogue();
NARRATIVEINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FLootTableRoll();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNPCDefinition
void UNPCDefinition::StaticRegisterNativesUNPCDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCDefinition);
UClass* Z_Construct_UClass_UNPCDefinition_NoRegister()
{
	return UNPCDefinition::StaticClass();
}
struct Z_Construct_UClass_UNPCDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Data asset with information about an NPC, as well as its class. We don't store NPC information in the NPC actor itself, this is so we can access \n * NPC information like name, icon, etc without having to load the entire NPC class into memory. \n */" },
		{ "IncludePath", "AI/NPCDefinition.h" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "Data asset with information about an NPC, as well as its class. We don't store NPC information in the NPC actor itself, this is so we can access\nNPC information like name, icon, etc without having to load the entire NPC class into memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCID_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** FName ID for this NPC - eventually I want to phase this out but dialogues require a SpeakerID so we populate that using this. (SpeakerID is difficult to remove atm as very coupled to other things.) */" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "FName ID for this NPC - eventually I want to phase this out but dialogues require a SpeakerID so we populate that using this. (SpeakerID is difficult to remove atm as very coupled to other things.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCName_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/**The name of this NPC. Will be used for the interaction and navigation markers. */" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "The name of this NPC. Will be used for the interaction and navigation markers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelRange_MetaData[] = {
		{ "Category", "NPC" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The NPCs level will be randomized between these values. */" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "The NPCs level will be randomized between these values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleInstances_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** Is this NPC unique, or can we spawn multiple of them? Main characters for example generally only\n\x09want a max of one spawned in a time, whilst a generic bandit might have as many instances as we want. */" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "Is this NPC unique, or can we spawn multiple of them? Main characters for example generally only\n      want a max of one spawned in a time, whilst a generic bandit might have as many instances as we want." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueNPCGUID_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** If this NPC is unique, we'll use this as the NPCs save system GUID. Since there is only one unique GUID\n\x09""defined here, this will nicely guarantee unique NPCs only ever have 1 save record created per NPC. */" },
		{ "EditCondition", "!bAllowMultipleInstances" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "If this NPC is unique, we'll use this as the NPCs save system GUID. Since there is only one unique GUID\n      defined here, this will nicely guarantee unique NPCs only ever have 1 save record created per NPC." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCClassPath_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** Class path */" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "Class path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[] = {
		{ "AssetBundles", "SpawnedData" },
		{ "Category", "Dialogue" },
		{ "Comment", "/** The dialogue that should play when we interact with this NPC - can be left empty.  */" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "The dialogue that should play when we interact with this NPC - can be left empty." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaggedDialogues_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/** The NPCs tagged dialogues these are essentially dialogue, usually free movement that can be kicked off via a tag \"TaggedDialogue.Taunt, TaggedDialogue.Greet, etc. */" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "The NPCs tagged dialogues these are essentially dialogue, usually free movement that can be kicked off via a tag \"TaggedDialogue.Taunt, TaggedDialogue.Greet, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVendor_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Whether this NPCs inventory should be a vendor inventory - that is to say they are a shop vendor  */" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "Whether this NPCs inventory should be a vendor inventory - that is to say they are a shop vendor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TradingCurrency_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Default currency this character should have in their inventory */" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "Default currency this character should have in their inventory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TradingItemLoadout_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** The items we should grant the character by default. */" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "The items we should grant the character by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShopFriendlyName_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** The name of the vendors shop, if this NPC is a vendor.  */" },
		{ "EditCondition", "bIsVendor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "The name of the vendors shop, if this NPC is a vendor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivitySchedule_MetaData[] = {
		{ "AssetBundles", "SpawnedData" },
		{ "Category", "AI" },
		{ "Comment", "/** The NPCs Activity schedule. */" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "The NPCs Activity schedule." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityConfiguration_MetaData[] = {
		{ "AssetBundles", "SpawnedData" },
		{ "Category", "AI" },
		{ "Comment", "/** The NPCs activity config. */" },
		{ "ModuleRelativePath", "Public/AI/NPCDefinition.h" },
		{ "ToolTip", "The NPCs activity config." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NPCID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NPCName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelRange;
	static void NewProp_bAllowMultipleInstances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleInstances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueNPCGUID;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_NPCClassPath;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaggedDialogues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaggedDialogues;
	static void NewProp_bIsVendor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVendor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TradingCurrency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TradingItemLoadout_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TradingItemLoadout;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ShopFriendlyName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActivitySchedule;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActivityConfiguration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_NPCID = { "NPCID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDefinition, NPCID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCID_MetaData), NewProp_NPCID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_NPCName = { "NPCName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDefinition, NPCName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCName_MetaData), NewProp_NPCName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_LevelRange = { "LevelRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDefinition, LevelRange), Z_Construct_UScriptStruct_FInt32Range, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelRange_MetaData), NewProp_LevelRange_MetaData) };
void Z_Construct_UClass_UNPCDefinition_Statics::NewProp_bAllowMultipleInstances_SetBit(void* Obj)
{
	((UNPCDefinition*)Obj)->bAllowMultipleInstances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_bAllowMultipleInstances = { "bAllowMultipleInstances", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNPCDefinition), &Z_Construct_UClass_UNPCDefinition_Statics::NewProp_bAllowMultipleInstances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMultipleInstances_MetaData), NewProp_bAllowMultipleInstances_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_UniqueNPCGUID = { "UniqueNPCGUID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDefinition, UniqueNPCGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueNPCGUID_MetaData), NewProp_UniqueNPCGUID_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_NPCClassPath = { "NPCClassPath", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDefinition, NPCClassPath), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCClassPath_MetaData), NewProp_NPCClassPath_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDefinition, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialogue_MetaData), NewProp_Dialogue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_TaggedDialogues_Inner = { "TaggedDialogues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTaggedDialogue, METADATA_PARAMS(0, nullptr) }; // 1666674158
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_TaggedDialogues = { "TaggedDialogues", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDefinition, TaggedDialogues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaggedDialogues_MetaData), NewProp_TaggedDialogues_MetaData) }; // 1666674158
void Z_Construct_UClass_UNPCDefinition_Statics::NewProp_bIsVendor_SetBit(void* Obj)
{
	((UNPCDefinition*)Obj)->bIsVendor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_bIsVendor = { "bIsVendor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNPCDefinition), &Z_Construct_UClass_UNPCDefinition_Statics::NewProp_bIsVendor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVendor_MetaData), NewProp_bIsVendor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_TradingCurrency = { "TradingCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDefinition, TradingCurrency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TradingCurrency_MetaData), NewProp_TradingCurrency_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_TradingItemLoadout_Inner = { "TradingItemLoadout", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootTableRoll, METADATA_PARAMS(0, nullptr) }; // 2828341262
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_TradingItemLoadout = { "TradingItemLoadout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDefinition, TradingItemLoadout), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TradingItemLoadout_MetaData), NewProp_TradingItemLoadout_MetaData) }; // 2828341262
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_ShopFriendlyName = { "ShopFriendlyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDefinition, ShopFriendlyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShopFriendlyName_MetaData), NewProp_ShopFriendlyName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_ActivitySchedule = { "ActivitySchedule", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDefinition, ActivitySchedule), Z_Construct_UClass_UNPCActivitySchedule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivitySchedule_MetaData), NewProp_ActivitySchedule_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNPCDefinition_Statics::NewProp_ActivityConfiguration = { "ActivityConfiguration", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDefinition, ActivityConfiguration), Z_Construct_UClass_UNPCActivityConfiguration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityConfiguration_MetaData), NewProp_ActivityConfiguration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_NPCID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_NPCName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_LevelRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_bAllowMultipleInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_UniqueNPCGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_NPCClassPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_TaggedDialogues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_TaggedDialogues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_bIsVendor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_TradingCurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_TradingItemLoadout_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_TradingItemLoadout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_ShopFriendlyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_ActivitySchedule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDefinition_Statics::NewProp_ActivityConfiguration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterDefinition,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCDefinition_Statics::ClassParams = {
	&UNPCDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNPCDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCDefinition()
{
	if (!Z_Registration_Info_UClass_UNPCDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCDefinition.OuterSingleton, Z_Construct_UClass_UNPCDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCDefinition.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNPCDefinition>()
{
	return UNPCDefinition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCDefinition);
UNPCDefinition::~UNPCDefinition() {}
// End Class UNPCDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NPCDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPCDefinition, UNPCDefinition::StaticClass, TEXT("UNPCDefinition"), &Z_Registration_Info_UClass_UNPCDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCDefinition), 2333747830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NPCDefinition_h_1998265240(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NPCDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NPCDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
