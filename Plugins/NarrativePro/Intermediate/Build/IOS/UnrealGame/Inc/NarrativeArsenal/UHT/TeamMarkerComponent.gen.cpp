// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Components/TeamMarkerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamMarkerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTeamMarkerComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTeamMarkerComponent_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationMarkerComponent();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UTeamMarkerComponent
void UTeamMarkerComponent::StaticRegisterNativesUTeamMarkerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTeamMarkerComponent);
UClass* Z_Construct_UClass_UTeamMarkerComponent_NoRegister()
{
	return UTeamMarkerComponent::StaticClass();
}
struct Z_Construct_UClass_UTeamMarkerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Navigation marker which changes shade to represent the others team attitude towards the viewer. \n */" },
		{ "IncludePath", "Components/TeamMarkerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/TeamMarkerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Navigation marker which changes shade to represent the others team attitude towards the viewer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyColor_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If we're friendly the nav marker will appear this color\n" },
		{ "ModuleRelativePath", "Public/Components/TeamMarkerComponent.h" },
		{ "ToolTip", "If we're friendly the nav marker will appear this color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeutralColor_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If we're neutral the nav marker will appear this color\n" },
		{ "ModuleRelativePath", "Public/Components/TeamMarkerComponent.h" },
		{ "ToolTip", "If we're neutral the nav marker will appear this color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostileColor_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If we're hostile the nav marker will appear this color\n" },
		{ "ModuleRelativePath", "Public/Components/TeamMarkerComponent.h" },
		{ "ToolTip", "If we're hostile the nav marker will appear this color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendlyColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NeutralColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HostileColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTeamMarkerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTeamMarkerComponent_Statics::NewProp_FriendlyColor = { "FriendlyColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTeamMarkerComponent, FriendlyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendlyColor_MetaData), NewProp_FriendlyColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTeamMarkerComponent_Statics::NewProp_NeutralColor = { "NeutralColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTeamMarkerComponent, NeutralColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeutralColor_MetaData), NewProp_NeutralColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTeamMarkerComponent_Statics::NewProp_HostileColor = { "HostileColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTeamMarkerComponent, HostileColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostileColor_MetaData), NewProp_HostileColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTeamMarkerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeamMarkerComponent_Statics::NewProp_FriendlyColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeamMarkerComponent_Statics::NewProp_NeutralColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeamMarkerComponent_Statics::NewProp_HostileColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTeamMarkerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTeamMarkerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavigationMarkerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTeamMarkerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTeamMarkerComponent_Statics::ClassParams = {
	&UTeamMarkerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTeamMarkerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTeamMarkerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTeamMarkerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTeamMarkerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTeamMarkerComponent()
{
	if (!Z_Registration_Info_UClass_UTeamMarkerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTeamMarkerComponent.OuterSingleton, Z_Construct_UClass_UTeamMarkerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTeamMarkerComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UTeamMarkerComponent>()
{
	return UTeamMarkerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTeamMarkerComponent);
UTeamMarkerComponent::~UTeamMarkerComponent() {}
// End Class UTeamMarkerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_TeamMarkerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTeamMarkerComponent, UTeamMarkerComponent::StaticClass, TEXT("UTeamMarkerComponent"), &Z_Registration_Info_UClass_UTeamMarkerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTeamMarkerComponent), 3615010787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_TeamMarkerComponent_h_1955750116(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_TeamMarkerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_TeamMarkerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
