// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeEvent_AddGoalToNPC() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeEvent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeEvent_AddGoalToNPC
void UNarrativeEvent_AddGoalToNPC::StaticRegisterNativesUNarrativeEvent_AddGoalToNPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeEvent_AddGoalToNPC);
UClass* Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_NoRegister()
{
	return UNarrativeEvent_AddGoalToNPC::StaticClass();
}
struct Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "Comment", "/**\n * Adds a goal to the given NPC. You may prefer to use a BP Event to bind this instead, as that will pass you a pointer back\n * to the created goal, meaning you can keep a reference to the goal, update it, or remove it. \n */" },
		{ "DisplayName", "Add Goal To NPC" },
		{ "IncludePath", "AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Adds a goal to the given NPC. You may prefer to use a BP Event to bind this instead, as that will pass you a pointer back\nto the created goal, meaning you can keep a reference to the goal, update it, or remove it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//The goal to send to the NPC \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ToolTip", "The goal to send to the NPC" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeEvent_AddGoalToNPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0146000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeEvent_AddGoalToNPC, Goal), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goal_MetaData), NewProp_Goal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::NewProp_Goal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeEvent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::ClassParams = {
	&UNarrativeEvent_AddGoalToNPC::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC()
{
	if (!Z_Registration_Info_UClass_UNarrativeEvent_AddGoalToNPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeEvent_AddGoalToNPC.OuterSingleton, Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeEvent_AddGoalToNPC.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeEvent_AddGoalToNPC>()
{
	return UNarrativeEvent_AddGoalToNPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeEvent_AddGoalToNPC);
UNarrativeEvent_AddGoalToNPC::~UNarrativeEvent_AddGoalToNPC() {}
// End Class UNarrativeEvent_AddGoalToNPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeEvent_AddGoalToNPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC, UNarrativeEvent_AddGoalToNPC::StaticClass, TEXT("UNarrativeEvent_AddGoalToNPC"), &Z_Registration_Info_UClass_UNarrativeEvent_AddGoalToNPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeEvent_AddGoalToNPC), 650292789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeEvent_AddGoalToNPC_h_3606142603(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeEvent_AddGoalToNPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeEvent_AddGoalToNPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
