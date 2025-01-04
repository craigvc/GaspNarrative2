// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/UI/NinjaFactionMembershipView.h"
#include "NinjaFactions/Public/Types/FFactionReputationTableRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionMembershipView() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionMembershipView();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionMembershipView_NoRegister();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionReputationTableRow();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class UNinjaFactionMembershipView
void UNinjaFactionMembershipView::StaticRegisterNativesUNinjaFactionMembershipView()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaFactionMembershipView);
UClass* Z_Construct_UClass_UNinjaFactionMembershipView_NoRegister()
{
	return UNinjaFactionMembershipView::StaticClass();
}
struct Z_Construct_UClass_UNinjaFactionMembershipView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A transfer object that can be used to render a list of Factions in a Widget.\n */" },
		{ "DisplayName", "Faction Membership View" },
		{ "IncludePath", "UI/NinjaFactionMembershipView.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/NinjaFactionMembershipView.h" },
		{ "ToolTip", "A transfer object that can be used to render a list of Factions in a Widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "Category", "Faction Membership View" },
		{ "Comment", "/** The Data Asset representing the faction. */" },
		{ "ModuleRelativePath", "Public/UI/NinjaFactionMembershipView.h" },
		{ "ToolTip", "The Data Asset representing the faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reputation_MetaData[] = {
		{ "Category", "Faction Membership View" },
		{ "Comment", "/** Reputation assigned to this membership. */" },
		{ "ModuleRelativePath", "Public/UI/NinjaFactionMembershipView.h" },
		{ "ToolTip", "Reputation assigned to this membership." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReputationTier_MetaData[] = {
		{ "Category", "Faction Membership View" },
		{ "Comment", "/** Details about this membership tier. */" },
		{ "ModuleRelativePath", "Public/UI/NinjaFactionMembershipView.h" },
		{ "ToolTip", "Details about this membership tier." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Reputation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReputationTier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaFactionMembershipView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaFactionMembershipView_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionMembershipView, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaFactionMembershipView_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionMembershipView, Reputation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reputation_MetaData), NewProp_Reputation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaFactionMembershipView_Statics::NewProp_ReputationTier = { "ReputationTier", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionMembershipView, ReputationTier), Z_Construct_UScriptStruct_FFactionReputationTableRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReputationTier_MetaData), NewProp_ReputationTier_MetaData) }; // 1860739754
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaFactionMembershipView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionMembershipView_Statics::NewProp_FactionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionMembershipView_Statics::NewProp_Reputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionMembershipView_Statics::NewProp_ReputationTier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionMembershipView_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaFactionMembershipView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionMembershipView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaFactionMembershipView_Statics::ClassParams = {
	&UNinjaFactionMembershipView::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaFactionMembershipView_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionMembershipView_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionMembershipView_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaFactionMembershipView_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaFactionMembershipView()
{
	if (!Z_Registration_Info_UClass_UNinjaFactionMembershipView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaFactionMembershipView.OuterSingleton, Z_Construct_UClass_UNinjaFactionMembershipView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaFactionMembershipView.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UNinjaFactionMembershipView>()
{
	return UNinjaFactionMembershipView::StaticClass();
}
UNinjaFactionMembershipView::UNinjaFactionMembershipView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaFactionMembershipView);
UNinjaFactionMembershipView::~UNinjaFactionMembershipView() {}
// End Class UNinjaFactionMembershipView

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_UI_NinjaFactionMembershipView_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaFactionMembershipView, UNinjaFactionMembershipView::StaticClass, TEXT("UNinjaFactionMembershipView"), &Z_Registration_Info_UClass_UNinjaFactionMembershipView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaFactionMembershipView), 2721818705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_UI_NinjaFactionMembershipView_h_3168893980(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_UI_NinjaFactionMembershipView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_UI_NinjaFactionMembershipView_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
