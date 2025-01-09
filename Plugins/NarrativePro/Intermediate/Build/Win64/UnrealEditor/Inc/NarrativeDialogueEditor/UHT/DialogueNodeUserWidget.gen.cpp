// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Public/DialogueNodeUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueNodeUserWidget() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogueNode_NoRegister();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueNodeUserWidget();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueNodeUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References

// Begin Class UDialogueNodeUserWidget Function OnNodeInitialized
struct DialogueNodeUserWidget_eventOnNodeInitialized_Parms
{
	UDialogueNode* InNode;
	UDialogue* InDialogue;
};
static const FName NAME_UDialogueNodeUserWidget_OnNodeInitialized = FName(TEXT("OnNodeInitialized"));
void UDialogueNodeUserWidget::OnNodeInitialized(UDialogueNode* InNode, UDialogue* InDialogue)
{
	DialogueNodeUserWidget_eventOnNodeInitialized_Parms Parms;
	Parms.InNode=InNode;
	Parms.InDialogue=InDialogue;
	UFunction* Func = FindFunctionChecked(NAME_UDialogueNodeUserWidget_OnNodeInitialized);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue Node" },
		{ "ModuleRelativePath", "Public/DialogueNodeUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueNodeUserWidget_eventOnNodeInitialized_Parms, InNode), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::NewProp_InDialogue = { "InDialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueNodeUserWidget_eventOnNodeInitialized_Parms, InDialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::NewProp_InNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::NewProp_InDialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueNodeUserWidget, nullptr, "OnNodeInitialized", nullptr, nullptr, Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::PropPointers), sizeof(DialogueNodeUserWidget_eventOnNodeInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(DialogueNodeUserWidget_eventOnNodeInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDialogueNodeUserWidget Function OnNodeInitialized

// Begin Class UDialogueNodeUserWidget
void UDialogueNodeUserWidget::StaticRegisterNativesUDialogueNodeUserWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueNodeUserWidget);
UClass* Z_Construct_UClass_UDialogueNodeUserWidget_NoRegister()
{
	return UDialogueNodeUserWidget::StaticClass();
}
struct Z_Construct_UClass_UDialogueNodeUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Parent class for a custom UMG widget that narrative will add to dialogue nodes if you want to override narratives default UI\n */" },
		{ "IncludePath", "DialogueNodeUserWidget.h" },
		{ "ModuleRelativePath", "Public/DialogueNodeUserWidget.h" },
		{ "ToolTip", "Parent class for a custom UMG widget that narrative will add to dialogue nodes if you want to override narratives default UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "ModuleRelativePath", "Public/DialogueNodeUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "ModuleRelativePath", "Public/DialogueNodeUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftPinBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Dialogue Node" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueNodeUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightPinBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Dialogue Node" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueNodeUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftPinBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightPinBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueNodeUserWidget_OnNodeInitialized, "OnNodeInitialized" }, // 2936456487
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueNodeUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNodeUserWidget, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNodeUserWidget, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialogue_MetaData), NewProp_Dialogue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_LeftPinBox = { "LeftPinBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNodeUserWidget, LeftPinBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftPinBox_MetaData), NewProp_LeftPinBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_RightPinBox = { "RightPinBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueNodeUserWidget, RightPinBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightPinBox_MetaData), NewProp_RightPinBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueNodeUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_LeftPinBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueNodeUserWidget_Statics::NewProp_RightPinBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNodeUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueNodeUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNodeUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueNodeUserWidget_Statics::ClassParams = {
	&UDialogueNodeUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogueNodeUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNodeUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueNodeUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueNodeUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueNodeUserWidget()
{
	if (!Z_Registration_Info_UClass_UDialogueNodeUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueNodeUserWidget.OuterSingleton, Z_Construct_UClass_UDialogueNodeUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueNodeUserWidget.OuterSingleton;
}
template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueNodeUserWidget>()
{
	return UDialogueNodeUserWidget::StaticClass();
}
UDialogueNodeUserWidget::UDialogueNodeUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueNodeUserWidget);
UDialogueNodeUserWidget::~UDialogueNodeUserWidget() {}
// End Class UDialogueNodeUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Public_DialogueNodeUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueNodeUserWidget, UDialogueNodeUserWidget::StaticClass, TEXT("UDialogueNodeUserWidget"), &Z_Registration_Info_UClass_UDialogueNodeUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueNodeUserWidget), 1187408611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Public_DialogueNodeUserWidget_h_1636125966(TEXT("/Script/NarrativeDialogueEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Public_DialogueNodeUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Public_DialogueNodeUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
