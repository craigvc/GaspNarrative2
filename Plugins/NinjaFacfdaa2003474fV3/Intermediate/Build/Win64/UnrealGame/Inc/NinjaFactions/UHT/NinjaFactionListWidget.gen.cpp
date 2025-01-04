// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/UI/NinjaFactionListWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionListWidget() {}

// Begin Cross Module References
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionListWidget();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionListWidget_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionMembershipView_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class UNinjaFactionListWidget Function GetFactionMemberships
struct Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics
{
	struct NinjaFactionListWidget_eventGetFactionMemberships_Parms
	{
		TArray<UNinjaFactionMembershipView*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|UI" },
		{ "Comment", "/**\n     * Retrieves all Faction Memberships assigned to this widget's owner.\n     */" },
		{ "ModuleRelativePath", "Public/UI/NinjaFactionListWidget.h" },
		{ "ToolTip", "Retrieves all Faction Memberships assigned to this widget's owner." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaFactionMembershipView_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionListWidget_eventGetFactionMemberships_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionListWidget, nullptr, "GetFactionMemberships", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics::NinjaFactionListWidget_eventGetFactionMemberships_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics::NinjaFactionListWidget_eventGetFactionMemberships_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionListWidget::execGetFactionMemberships)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaFactionMembershipView*>*)Z_Param__Result=P_THIS->GetFactionMemberships();
	P_NATIVE_END;
}
// End Class UNinjaFactionListWidget Function GetFactionMemberships

// Begin Class UNinjaFactionListWidget
void UNinjaFactionListWidget::StaticRegisterNativesUNinjaFactionListWidget()
{
	UClass* Class = UNinjaFactionListWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFactionMemberships", &UNinjaFactionListWidget::execGetFactionMemberships },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaFactionListWidget);
UClass* Z_Construct_UClass_UNinjaFactionListWidget_NoRegister()
{
	return UNinjaFactionListWidget::StaticClass();
}
struct Z_Construct_UClass_UNinjaFactionListWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Retrieves all factions available to the owner, considering reputation.\n */" },
		{ "DisplayName", "Faction List Widget" },
		{ "IncludePath", "UI/NinjaFactionListWidget.h" },
		{ "ModuleRelativePath", "Public/UI/NinjaFactionListWidget.h" },
		{ "ToolTip", "Retrieves all factions available to the owner, considering reputation." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaFactionListWidget_GetFactionMemberships, "GetFactionMemberships" }, // 721435678
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaFactionListWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaFactionListWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionListWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaFactionListWidget_Statics::ClassParams = {
	&UNinjaFactionListWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionListWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaFactionListWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaFactionListWidget()
{
	if (!Z_Registration_Info_UClass_UNinjaFactionListWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaFactionListWidget.OuterSingleton, Z_Construct_UClass_UNinjaFactionListWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaFactionListWidget.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UNinjaFactionListWidget>()
{
	return UNinjaFactionListWidget::StaticClass();
}
UNinjaFactionListWidget::UNinjaFactionListWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaFactionListWidget);
UNinjaFactionListWidget::~UNinjaFactionListWidget() {}
// End Class UNinjaFactionListWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_UI_NinjaFactionListWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaFactionListWidget, UNinjaFactionListWidget::StaticClass, TEXT("UNinjaFactionListWidget"), &Z_Registration_Info_UClass_UNinjaFactionListWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaFactionListWidget), 139819455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_UI_NinjaFactionListWidget_h_1586104514(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_UI_NinjaFactionListWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_UI_NinjaFactionListWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
