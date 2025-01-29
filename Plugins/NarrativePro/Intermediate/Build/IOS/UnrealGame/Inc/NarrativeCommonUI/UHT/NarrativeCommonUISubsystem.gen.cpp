// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeCommonUI/Public/NarrativeCommonUISubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCommonUISubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonHUD_NoRegister();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonUISubsystem();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonUISubsystem_NoRegister();
NARRATIVECOMMONUI_API UFunction* Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NarrativeCommonUI();
// End Cross Module References

// Begin Delegate FNarrativeHandleSubtitle
struct Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature_Statics
{
	struct _Script_NarrativeCommonUI_eventNarrativeHandleSubtitle_Parms
	{
		FText SubtitleText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeCommonUISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_SubtitleText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature_Statics::NewProp_SubtitleText = { "SubtitleText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeCommonUI_eventNarrativeHandleSubtitle_Parms, SubtitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleText_MetaData), NewProp_SubtitleText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature_Statics::NewProp_SubtitleText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeCommonUI, nullptr, "NarrativeHandleSubtitle__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature_Statics::_Script_NarrativeCommonUI_eventNarrativeHandleSubtitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature_Statics::_Script_NarrativeCommonUI_eventNarrativeHandleSubtitle_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNarrativeHandleSubtitle_DelegateWrapper(const FMulticastScriptDelegate& NarrativeHandleSubtitle, FText const& SubtitleText)
{
	struct _Script_NarrativeCommonUI_eventNarrativeHandleSubtitle_Parms
	{
		FText SubtitleText;
	};
	_Script_NarrativeCommonUI_eventNarrativeHandleSubtitle_Parms Parms;
	Parms.SubtitleText=SubtitleText;
	NarrativeHandleSubtitle.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNarrativeHandleSubtitle

// Begin Class UNarrativeCommonUISubsystem Function OnSetSubtitle
struct Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle_Statics
{
	struct NarrativeCommonUISubsystem_eventOnSetSubtitle_Parms
	{
		FText SubtitleText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeCommonUISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_SubtitleText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle_Statics::NewProp_SubtitleText = { "SubtitleText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonUISubsystem_eventOnSetSubtitle_Parms, SubtitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleText_MetaData), NewProp_SubtitleText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle_Statics::NewProp_SubtitleText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCommonUISubsystem, nullptr, "OnSetSubtitle", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle_Statics::NarrativeCommonUISubsystem_eventOnSetSubtitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle_Statics::NarrativeCommonUISubsystem_eventOnSetSubtitle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCommonUISubsystem::execOnSetSubtitle)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_SubtitleText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSetSubtitle(Z_Param_Out_SubtitleText);
	P_NATIVE_END;
}
// End Class UNarrativeCommonUISubsystem Function OnSetSubtitle

// Begin Class UNarrativeCommonUISubsystem Function ShowNotification
struct Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics
{
	struct NarrativeCommonUISubsystem_eventShowNotification_Parms
	{
		FText NotificationText;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Common UI" },
		{ "Comment", "//Send a notification to the narrative HUD\n" },
		{ "CPP_Default_Duration", "5.000000" },
		{ "ModuleRelativePath", "Public/NarrativeCommonUISubsystem.h" },
		{ "ToolTip", "Send a notification to the narrative HUD" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonUISubsystem_eventShowNotification_Parms, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonUISubsystem_eventShowNotification_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics::NewProp_NotificationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCommonUISubsystem, nullptr, "ShowNotification", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics::NarrativeCommonUISubsystem_eventShowNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics::NarrativeCommonUISubsystem_eventShowNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCommonUISubsystem::execShowNotification)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NotificationText);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowNotification(Z_Param_Out_NotificationText,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UNarrativeCommonUISubsystem Function ShowNotification

// Begin Class UNarrativeCommonUISubsystem
void UNarrativeCommonUISubsystem::StaticRegisterNativesUNarrativeCommonUISubsystem()
{
	UClass* Class = UNarrativeCommonUISubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSetSubtitle", &UNarrativeCommonUISubsystem::execOnSetSubtitle },
		{ "ShowNotification", &UNarrativeCommonUISubsystem::execShowNotification },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCommonUISubsystem);
UClass* Z_Construct_UClass_UNarrativeCommonUISubsystem_NoRegister()
{
	return UNarrativeCommonUISubsystem::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Currently just used to provide efficient access to the narrative HUD, but may be used for more in future. \n */" },
		{ "IncludePath", "NarrativeCommonUISubsystem.h" },
		{ "ModuleRelativePath", "Public/NarrativeCommonUISubsystem.h" },
		{ "ToolTip", "Currently just used to provide efficient access to the narrative HUD, but may be used for more in future." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonHUD_MetaData[] = {
		{ "Category", "Narrative Common UI" },
		{ "Comment", "//Cached common hud \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NarrativeCommonUISubsystem.h" },
		{ "ToolTip", "Cached common hud" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHandleSubtitle_MetaData[] = {
		{ "Category", "Narrative Common UI" },
		{ "Comment", "//Allows blueprints to handle UE5 subtitles if they want!\n" },
		{ "ModuleRelativePath", "Public/NarrativeCommonUISubsystem.h" },
		{ "ToolTip", "Allows blueprints to handle UE5 subtitles if they want!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonHUD;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandleSubtitle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCommonUISubsystem_OnSetSubtitle, "OnSetSubtitle" }, // 1653987693
		{ &Z_Construct_UFunction_UNarrativeCommonUISubsystem_ShowNotification, "ShowNotification" }, // 1285589851
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCommonUISubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics::NewProp_CommonHUD = { "CommonHUD", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCommonUISubsystem, CommonHUD), Z_Construct_UClass_UNarrativeCommonHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonHUD_MetaData), NewProp_CommonHUD_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics::NewProp_OnHandleSubtitle = { "OnHandleSubtitle", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCommonUISubsystem, OnHandleSubtitle), Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHandleSubtitle_MetaData), NewProp_OnHandleSubtitle_MetaData) }; // 696294564
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics::NewProp_CommonHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics::NewProp_OnHandleSubtitle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeCommonUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics::ClassParams = {
	&UNarrativeCommonUISubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCommonUISubsystem()
{
	if (!Z_Registration_Info_UClass_UNarrativeCommonUISubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCommonUISubsystem.OuterSingleton, Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCommonUISubsystem.OuterSingleton;
}
template<> NARRATIVECOMMONUI_API UClass* StaticClass<UNarrativeCommonUISubsystem>()
{
	return UNarrativeCommonUISubsystem::StaticClass();
}
UNarrativeCommonUISubsystem::UNarrativeCommonUISubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCommonUISubsystem);
UNarrativeCommonUISubsystem::~UNarrativeCommonUISubsystem() {}
// End Class UNarrativeCommonUISubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUISubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCommonUISubsystem, UNarrativeCommonUISubsystem::StaticClass, TEXT("UNarrativeCommonUISubsystem"), &Z_Registration_Info_UClass_UNarrativeCommonUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCommonUISubsystem), 3446412955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUISubsystem_h_1020854742(TEXT("/Script/NarrativeCommonUI"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUISubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUISubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
