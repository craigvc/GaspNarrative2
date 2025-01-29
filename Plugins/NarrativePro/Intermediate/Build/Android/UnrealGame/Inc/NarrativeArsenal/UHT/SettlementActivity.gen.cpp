// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Settlements/Activities/SettlementActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettlementActivity() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ASettlement_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeActivityBase();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalItem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USettlementActivity();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USettlementActivity_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USettlementActivityComponent_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FSettlementActivityNPCTarget();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FSettlementActivityNPCTarget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SettlementActivityNPCTarget;
class UScriptStruct* FSettlementActivityNPCTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SettlementActivityNPCTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SettlementActivityNPCTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSettlementActivityNPCTarget, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("SettlementActivityNPCTarget"));
	}
	return Z_Registration_Info_UScriptStruct_SettlementActivityNPCTarget.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FSettlementActivityNPCTarget>()
{
	return FSettlementActivityNPCTarget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Represents one of the NPCs in a settlement activity\n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivity.h" },
		{ "ToolTip", "Represents one of the NPCs in a settlement activity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCDefinition_MetaData[] = {
		{ "Category", "Settlement Activity" },
		{ "Comment", "//The NPC to run this activity on\n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivity.h" },
		{ "ToolTip", "The NPC to run this activity on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
		{ "Category", "Settlement Activity" },
		{ "Comment", "//The activity to run at the specified time \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivity.h" },
		{ "ToolTip", "The activity to run at the specified time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireSucceed_MetaData[] = {
		{ "Category", "Settlement Activity" },
		{ "Comment", "//If false, the settlement activity can still run even if this NPC failed to start the activity the settlement wanted. \n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivity.h" },
		{ "ToolTip", "If false, the settlement activity can still run even if this NPC failed to start the activity the settlement wanted." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCDefinition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Goal;
	static void NewProp_bRequireSucceed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireSucceed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSettlementActivityNPCTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::NewProp_NPCDefinition = { "NPCDefinition", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSettlementActivityNPCTarget, NPCDefinition), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCDefinition_MetaData), NewProp_NPCDefinition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x011600000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSettlementActivityNPCTarget, Goal), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goal_MetaData), NewProp_Goal_MetaData) };
void Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::NewProp_bRequireSucceed_SetBit(void* Obj)
{
	((FSettlementActivityNPCTarget*)Obj)->bRequireSucceed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::NewProp_bRequireSucceed = { "bRequireSucceed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSettlementActivityNPCTarget), &Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::NewProp_bRequireSucceed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireSucceed_MetaData), NewProp_bRequireSucceed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::NewProp_NPCDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::NewProp_Goal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::NewProp_bRequireSucceed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"SettlementActivityNPCTarget",
	Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::PropPointers),
	sizeof(FSettlementActivityNPCTarget),
	alignof(FSettlementActivityNPCTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSettlementActivityNPCTarget()
{
	if (!Z_Registration_Info_UScriptStruct_SettlementActivityNPCTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SettlementActivityNPCTarget.InnerSingleton, Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SettlementActivityNPCTarget.InnerSingleton;
}
// End ScriptStruct FSettlementActivityNPCTarget

// Begin Class USettlementActivity
void USettlementActivity::StaticRegisterNativesUSettlementActivity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettlementActivity);
UClass* Z_Construct_UClass_USettlementActivity_NoRegister()
{
	return USettlementActivity::StaticClass();
}
struct Z_Construct_UClass_USettlementActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Similar to an NPC Activity, however this one is ran by the settlement instead, and can effect multiple different NPCs.  \n * \n * A settlement activity consists of a list of targets and their activities. Their activities will be ran and the settlement activity acts\n * as a manager, tracking the various tasks. The settlement activity can either end itself or be ended when its EndTime is reached. \n * \n * A good example would be SettlementActivity_ConversateAtLocation. The NPCs to go to the specifed location, and then the settlement activity acts\n * as a manager of sorts, and will begin the dialogue once it sees all of the NPCs have reached their target location. \n */" },
		{ "IncludePath", "Settlements/Activities/SettlementActivity.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivity.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Similar to an NPC Activity, however this one is ran by the settlement instead, and can effect multiple different NPCs.\n\nA settlement activity consists of a list of targets and their activities. Their activities will be ran and the settlement activity acts\nas a manager, tracking the various tasks. The settlement activity can either end itself or be ended when its EndTime is reached.\n\nA good example would be SettlementActivity_ConversateAtLocation. The NPCs to go to the specifed location, and then the settlement activity acts\nas a manager of sorts, and will begin the dialogue once it sees all of the NPCs have reached their target location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCTargets_MetaData[] = {
		{ "Category", "Settlement Activity" },
		{ "Comment", "//The NPCs that this settlement activity will effect \n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivity.h" },
		{ "ToolTip", "The NPCs that this settlement activity will effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerSettlement_MetaData[] = {
		{ "Category", "Settlement Activity" },
		{ "Comment", "//We cache the owning settlement and activity component\n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivity.h" },
		{ "ToolTip", "We cache the owning settlement and activity component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActivityComponent_MetaData[] = {
		{ "Category", "Settlement Activity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IssuedGoals_MetaData[] = {
		{ "Category", "Settlement Activity" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NPCTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCTargets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerSettlement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActivityComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IssuedGoals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IssuedGoals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettlementActivity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USettlementActivity_Statics::NewProp_NPCTargets_Inner = { "NPCTargets", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSettlementActivityNPCTarget, METADATA_PARAMS(0, nullptr) }; // 3028400017
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USettlementActivity_Statics::NewProp_NPCTargets = { "NPCTargets", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettlementActivity, NPCTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCTargets_MetaData), NewProp_NPCTargets_MetaData) }; // 3028400017
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettlementActivity_Statics::NewProp_OwnerSettlement = { "OwnerSettlement", nullptr, (EPropertyFlags)0x0114000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettlementActivity, OwnerSettlement), Z_Construct_UClass_ASettlement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerSettlement_MetaData), NewProp_OwnerSettlement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettlementActivity_Statics::NewProp_OwnerActivityComponent = { "OwnerActivityComponent", nullptr, (EPropertyFlags)0x011400000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettlementActivity, OwnerActivityComponent), Z_Construct_UClass_USettlementActivityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerActivityComponent_MetaData), NewProp_OwnerActivityComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettlementActivity_Statics::NewProp_IssuedGoals_Inner = { "IssuedGoals", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USettlementActivity_Statics::NewProp_IssuedGoals = { "IssuedGoals", nullptr, (EPropertyFlags)0x0114000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettlementActivity, IssuedGoals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IssuedGoals_MetaData), NewProp_IssuedGoals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettlementActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementActivity_Statics::NewProp_NPCTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementActivity_Statics::NewProp_NPCTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementActivity_Statics::NewProp_OwnerSettlement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementActivity_Statics::NewProp_OwnerActivityComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementActivity_Statics::NewProp_IssuedGoals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementActivity_Statics::NewProp_IssuedGoals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettlementActivity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USettlementActivity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeActivityBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettlementActivity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettlementActivity_Statics::ClassParams = {
	&USettlementActivity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USettlementActivity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USettlementActivity_Statics::PropPointers),
	0,
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettlementActivity_Statics::Class_MetaDataParams), Z_Construct_UClass_USettlementActivity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettlementActivity()
{
	if (!Z_Registration_Info_UClass_USettlementActivity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettlementActivity.OuterSingleton, Z_Construct_UClass_USettlementActivity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettlementActivity.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<USettlementActivity>()
{
	return USettlementActivity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettlementActivity);
USettlementActivity::~USettlementActivity() {}
// End Class USettlementActivity

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivity_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSettlementActivityNPCTarget::StaticStruct, Z_Construct_UScriptStruct_FSettlementActivityNPCTarget_Statics::NewStructOps, TEXT("SettlementActivityNPCTarget"), &Z_Registration_Info_UScriptStruct_SettlementActivityNPCTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSettlementActivityNPCTarget), 3028400017U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettlementActivity, USettlementActivity::StaticClass, TEXT("USettlementActivity"), &Z_Registration_Info_UClass_USettlementActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettlementActivity), 3524511798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivity_h_1920346188(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivity_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivity_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
