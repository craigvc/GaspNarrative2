// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeCommonUI/Public/Widgets/NarrativeCommonButtonBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCommonButtonBase() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonButtonBase();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonButtonBase_NoRegister();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonTextBlock_NoRegister();
SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
UPackage* Z_Construct_UPackage__Script_NarrativeCommonUI();
// End Cross Module References

// Begin Class UNarrativeCommonButtonBase Function ForceSetIsSelected
struct Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics
{
	struct NarrativeCommonButtonBase_eventForceSetIsSelected_Parms
	{
		bool bInSelected;
		bool bAllowSound;
		bool bBroadcast;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Common Button" },
		{ "Comment", "//Just a wrapper for SetSelectedInternal, which annoyingly is BP Protected and requires wrapping. \n" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeCommonButtonBase.h" },
		{ "ToolTip", "Just a wrapper for SetSelectedInternal, which annoyingly is BP Protected and requires wrapping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInSelected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bInSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInSelected;
	static void NewProp_bAllowSound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSound;
	static void NewProp_bBroadcast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBroadcast;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::NewProp_bInSelected_SetBit(void* Obj)
{
	((NarrativeCommonButtonBase_eventForceSetIsSelected_Parms*)Obj)->bInSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::NewProp_bInSelected = { "bInSelected", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCommonButtonBase_eventForceSetIsSelected_Parms), &Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::NewProp_bInSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInSelected_MetaData), NewProp_bInSelected_MetaData) };
void Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::NewProp_bAllowSound_SetBit(void* Obj)
{
	((NarrativeCommonButtonBase_eventForceSetIsSelected_Parms*)Obj)->bAllowSound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::NewProp_bAllowSound = { "bAllowSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCommonButtonBase_eventForceSetIsSelected_Parms), &Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::NewProp_bAllowSound_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::NewProp_bBroadcast_SetBit(void* Obj)
{
	((NarrativeCommonButtonBase_eventForceSetIsSelected_Parms*)Obj)->bBroadcast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::NewProp_bBroadcast = { "bBroadcast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCommonButtonBase_eventForceSetIsSelected_Parms), &Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::NewProp_bBroadcast_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::NewProp_bInSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::NewProp_bAllowSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::NewProp_bBroadcast,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCommonButtonBase, nullptr, "ForceSetIsSelected", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::NarrativeCommonButtonBase_eventForceSetIsSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::NarrativeCommonButtonBase_eventForceSetIsSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCommonButtonBase::execForceSetIsSelected)
{
	P_GET_UBOOL(Z_Param_bInSelected);
	P_GET_UBOOL(Z_Param_bAllowSound);
	P_GET_UBOOL(Z_Param_bBroadcast);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceSetIsSelected(Z_Param_bInSelected,Z_Param_bAllowSound,Z_Param_bBroadcast);
	P_NATIVE_END;
}
// End Class UNarrativeCommonButtonBase Function ForceSetIsSelected

// Begin Class UNarrativeCommonButtonBase Function SetButtonText
struct Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText_Statics
{
	struct NarrativeCommonButtonBase_eventSetButtonText_Parms
	{
		FText InText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Common Button" },
		{ "Comment", "//Sets the buttons text block text. \n" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeCommonButtonBase.h" },
		{ "ToolTip", "Sets the buttons text block text." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonButtonBase_eventSetButtonText_Parms, InText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCommonButtonBase, nullptr, "SetButtonText", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText_Statics::NarrativeCommonButtonBase_eventSetButtonText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText_Statics::NarrativeCommonButtonBase_eventSetButtonText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCommonButtonBase::execSetButtonText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonText(Z_Param_InText);
	P_NATIVE_END;
}
// End Class UNarrativeCommonButtonBase Function SetButtonText

// Begin Class UNarrativeCommonButtonBase
void UNarrativeCommonButtonBase::StaticRegisterNativesUNarrativeCommonButtonBase()
{
	UClass* Class = UNarrativeCommonButtonBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForceSetIsSelected", &UNarrativeCommonButtonBase::execForceSetIsSelected },
		{ "SetButtonText", &UNarrativeCommonButtonBase::execSetButtonText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCommonButtonBase);
UClass* Z_Construct_UClass_UNarrativeCommonButtonBase_NoRegister()
{
	return UNarrativeCommonButtonBase::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCommonButtonBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Narrative Common Widgets" },
		{ "Comment", "/**\n * The base class for a narrative common UI button. Includes a bit of extra functionality over the base common button. \n */" },
		{ "IncludePath", "Widgets/NarrativeCommonButtonBase.h" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeCommonButtonBase.h" },
		{ "ToolTip", "The base class for a narrative common UI button. Includes a bit of extra functionality over the base common button." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonTextBlock_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Button Text" },
		{ "Comment", "//Optional button text that can be placed on the button. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeCommonButtonBase.h" },
		{ "ToolTip", "Optional button text that can be placed on the button." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[] = {
		{ "Category", "Button Text" },
		{ "Comment", "//The text to display on the buttons text block.\n" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeCommonButtonBase.h" },
		{ "ToolTip", "The text to display on the buttons text block." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextJustification_MetaData[] = {
		{ "Category", "Button Text" },
		{ "Comment", "//The justification for text to display on the buttons text block.\n" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeCommonButtonBase.h" },
		{ "ToolTip", "The justification for text to display on the buttons text block." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonTextBlock;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextJustification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCommonButtonBase_ForceSetIsSelected, "ForceSetIsSelected" }, // 3987655666
		{ &Z_Construct_UFunction_UNarrativeCommonButtonBase_SetButtonText, "SetButtonText" }, // 727176092
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCommonButtonBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::NewProp_ButtonTextBlock = { "ButtonTextBlock", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCommonButtonBase, ButtonTextBlock), Z_Construct_UClass_UNarrativeCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonTextBlock_MetaData), NewProp_ButtonTextBlock_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCommonButtonBase, ButtonText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonText_MetaData), NewProp_ButtonText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::NewProp_TextJustification = { "TextJustification", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCommonButtonBase, TextJustification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextJustification_MetaData), NewProp_TextJustification_MetaData) }; // 3082493381
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::NewProp_ButtonTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::NewProp_ButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::NewProp_TextJustification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeCommonUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::ClassParams = {
	&UNarrativeCommonButtonBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCommonButtonBase()
{
	if (!Z_Registration_Info_UClass_UNarrativeCommonButtonBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCommonButtonBase.OuterSingleton, Z_Construct_UClass_UNarrativeCommonButtonBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCommonButtonBase.OuterSingleton;
}
template<> NARRATIVECOMMONUI_API UClass* StaticClass<UNarrativeCommonButtonBase>()
{
	return UNarrativeCommonButtonBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCommonButtonBase);
UNarrativeCommonButtonBase::~UNarrativeCommonButtonBase() {}
// End Class UNarrativeCommonButtonBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeCommonButtonBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCommonButtonBase, UNarrativeCommonButtonBase::StaticClass, TEXT("UNarrativeCommonButtonBase"), &Z_Registration_Info_UClass_UNarrativeCommonButtonBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCommonButtonBase), 878593737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeCommonButtonBase_h_907589090(TEXT("/Script/NarrativeCommonUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeCommonButtonBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeCommonButtonBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
