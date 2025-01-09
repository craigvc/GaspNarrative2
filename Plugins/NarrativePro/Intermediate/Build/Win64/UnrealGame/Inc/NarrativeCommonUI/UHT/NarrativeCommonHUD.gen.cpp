// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeCommonUI/Public/NarrativeCommonHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCommonHUD() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonHUD();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeCommonUI();
// End Cross Module References

// Begin Class UNarrativeCommonHUD Function ShowMajorNotification
struct NarrativeCommonHUD_eventShowMajorNotification_Parms
{
	FText NotificationText;
	FText MajorNotificationSubtext;
	float Duration;
	bool bOverrideCurrentNotification;
};
static const FName NAME_UNarrativeCommonHUD_ShowMajorNotification = FName(TEXT("ShowMajorNotification"));
void UNarrativeCommonHUD::ShowMajorNotification(FText const& NotificationText, FText const& MajorNotificationSubtext, const float Duration, bool bOverrideCurrentNotification)
{
	NarrativeCommonHUD_eventShowMajorNotification_Parms Parms;
	Parms.NotificationText=NotificationText;
	Parms.MajorNotificationSubtext=MajorNotificationSubtext;
	Parms.Duration=Duration;
	Parms.bOverrideCurrentNotification=bOverrideCurrentNotification ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeCommonHUD_ShowMajorNotification);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Notifications" },
		{ "Comment", "//Show a major notification\n" },
		{ "CPP_Default_bOverrideCurrentNotification", "true" },
		{ "CPP_Default_Duration", "5.000000" },
		{ "ModuleRelativePath", "Public/NarrativeCommonHUD.h" },
		{ "ToolTip", "Show a major notification" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MajorNotificationSubtext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCurrentNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MajorNotificationSubtext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bOverrideCurrentNotification_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCurrentNotification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonHUD_eventShowMajorNotification_Parms, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::NewProp_MajorNotificationSubtext = { "MajorNotificationSubtext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonHUD_eventShowMajorNotification_Parms, MajorNotificationSubtext), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MajorNotificationSubtext_MetaData), NewProp_MajorNotificationSubtext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonHUD_eventShowMajorNotification_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
void Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::NewProp_bOverrideCurrentNotification_SetBit(void* Obj)
{
	((NarrativeCommonHUD_eventShowMajorNotification_Parms*)Obj)->bOverrideCurrentNotification = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::NewProp_bOverrideCurrentNotification = { "bOverrideCurrentNotification", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCommonHUD_eventShowMajorNotification_Parms), &Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::NewProp_bOverrideCurrentNotification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCurrentNotification_MetaData), NewProp_bOverrideCurrentNotification_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::NewProp_NotificationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::NewProp_MajorNotificationSubtext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::NewProp_bOverrideCurrentNotification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCommonHUD, nullptr, "ShowMajorNotification", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::PropPointers), sizeof(NarrativeCommonHUD_eventShowMajorNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCommonHUD_eventShowMajorNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeCommonHUD Function ShowMajorNotification

// Begin Class UNarrativeCommonHUD Function ShowNotification
struct NarrativeCommonHUD_eventShowNotification_Parms
{
	FText NotificationText;
	float Duration;
};
static const FName NAME_UNarrativeCommonHUD_ShowNotification = FName(TEXT("ShowNotification"));
void UNarrativeCommonHUD::ShowNotification(FText const& NotificationText, const float Duration)
{
	NarrativeCommonHUD_eventShowNotification_Parms Parms;
	Parms.NotificationText=NotificationText;
	Parms.Duration=Duration;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeCommonHUD_ShowNotification);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Notifications" },
		{ "Comment", "//Show a notification - the UMG widget handles implementing this. bOverrideCurrentNotification is only relevant for major notifications - minors are shown in a stack. \n" },
		{ "CPP_Default_Duration", "5.000000" },
		{ "ModuleRelativePath", "Public/NarrativeCommonHUD.h" },
		{ "ToolTip", "Show a notification - the UMG widget handles implementing this. bOverrideCurrentNotification is only relevant for major notifications - minors are shown in a stack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonHUD_eventShowNotification_Parms, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonHUD_eventShowNotification_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification_Statics::NewProp_NotificationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCommonHUD, nullptr, "ShowNotification", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification_Statics::PropPointers), sizeof(NarrativeCommonHUD_eventShowNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCommonHUD_eventShowNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeCommonHUD Function ShowNotification

// Begin Class UNarrativeCommonHUD
void UNarrativeCommonHUD::StaticRegisterNativesUNarrativeCommonHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCommonHUD);
UClass* Z_Construct_UClass_UNarrativeCommonHUD_NoRegister()
{
	return UNarrativeCommonHUD::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCommonHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NarrativeCommonHUD.h" },
		{ "ModuleRelativePath", "Public/NarrativeCommonHUD.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCommonHUD_ShowMajorNotification, "ShowMajorNotification" }, // 2042756057
		{ &Z_Construct_UFunction_UNarrativeCommonHUD_ShowNotification, "ShowNotification" }, // 3461525902
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCommonHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeCommonHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeCommonUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCommonHUD_Statics::ClassParams = {
	&UNarrativeCommonHUD::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCommonHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCommonHUD()
{
	if (!Z_Registration_Info_UClass_UNarrativeCommonHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCommonHUD.OuterSingleton, Z_Construct_UClass_UNarrativeCommonHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCommonHUD.OuterSingleton;
}
template<> NARRATIVECOMMONUI_API UClass* StaticClass<UNarrativeCommonHUD>()
{
	return UNarrativeCommonHUD::StaticClass();
}
UNarrativeCommonHUD::UNarrativeCommonHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCommonHUD);
UNarrativeCommonHUD::~UNarrativeCommonHUD() {}
// End Class UNarrativeCommonHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCommonHUD, UNarrativeCommonHUD::StaticClass, TEXT("UNarrativeCommonHUD"), &Z_Registration_Info_UClass_UNarrativeCommonHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCommonHUD), 2670895919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonHUD_h_2145973474(TEXT("/Script/NarrativeCommonUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
