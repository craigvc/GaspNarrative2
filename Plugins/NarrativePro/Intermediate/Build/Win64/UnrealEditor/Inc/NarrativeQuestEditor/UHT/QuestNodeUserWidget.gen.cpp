// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Public/QuestNodeUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestNodeUserWidget() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuest_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestNode_NoRegister();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestNodeUserWidget();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestNodeUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References

// Begin Class UQuestNodeUserWidget Function OnNodeInitialized
struct QuestNodeUserWidget_eventOnNodeInitialized_Parms
{
	UQuestNode* InNode;
	UQuest* InQuest;
};
static const FName NAME_UQuestNodeUserWidget_OnNodeInitialized = FName(TEXT("OnNodeInitialized"));
void UQuestNodeUserWidget::OnNodeInitialized(UQuestNode* InNode, UQuest* InQuest)
{
	QuestNodeUserWidget_eventOnNodeInitialized_Parms Parms;
	Parms.InNode=InNode;
	Parms.InQuest=InQuest;
	UFunction* Func = FindFunctionChecked(NAME_UQuestNodeUserWidget_OnNodeInitialized);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Node" },
		{ "ModuleRelativePath", "Public/QuestNodeUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InQuest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestNodeUserWidget_eventOnNodeInitialized_Parms, InNode), Z_Construct_UClass_UQuestNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::NewProp_InQuest = { "InQuest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestNodeUserWidget_eventOnNodeInitialized_Parms, InQuest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::NewProp_InNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::NewProp_InQuest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestNodeUserWidget, nullptr, "OnNodeInitialized", nullptr, nullptr, Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::PropPointers), sizeof(QuestNodeUserWidget_eventOnNodeInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(QuestNodeUserWidget_eventOnNodeInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UQuestNodeUserWidget Function OnNodeInitialized

// Begin Class UQuestNodeUserWidget
void UQuestNodeUserWidget::StaticRegisterNativesUQuestNodeUserWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestNodeUserWidget);
UClass* Z_Construct_UClass_UQuestNodeUserWidget_NoRegister()
{
	return UQuestNodeUserWidget::StaticClass();
}
struct Z_Construct_UClass_UQuestNodeUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Parent class for a custom UMG widget that narrative will add to Quest nodes if you want to override narratives default UI\n */" },
		{ "IncludePath", "QuestNodeUserWidget.h" },
		{ "ModuleRelativePath", "Public/QuestNodeUserWidget.h" },
		{ "ToolTip", "Parent class for a custom UMG widget that narrative will add to Quest nodes if you want to override narratives default UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Quest Node" },
		{ "ModuleRelativePath", "Public/QuestNodeUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "Category", "Quest Node" },
		{ "ModuleRelativePath", "Public/QuestNodeUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftPinBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestNodeUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightPinBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestNodeUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftPinBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightPinBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestNodeUserWidget_OnNodeInitialized, "OnNodeInitialized" }, // 579788379
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestNodeUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestNodeUserWidget, Node), Z_Construct_UClass_UQuestNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestNodeUserWidget, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_LeftPinBox = { "LeftPinBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestNodeUserWidget, LeftPinBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftPinBox_MetaData), NewProp_LeftPinBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_RightPinBox = { "RightPinBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestNodeUserWidget, RightPinBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightPinBox_MetaData), NewProp_RightPinBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestNodeUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_LeftPinBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNodeUserWidget_Statics::NewProp_RightPinBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNodeUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestNodeUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNodeUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestNodeUserWidget_Statics::ClassParams = {
	&UQuestNodeUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQuestNodeUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNodeUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNodeUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestNodeUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestNodeUserWidget()
{
	if (!Z_Registration_Info_UClass_UQuestNodeUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestNodeUserWidget.OuterSingleton, Z_Construct_UClass_UQuestNodeUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestNodeUserWidget.OuterSingleton;
}
template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestNodeUserWidget>()
{
	return UQuestNodeUserWidget::StaticClass();
}
UQuestNodeUserWidget::UQuestNodeUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestNodeUserWidget);
UQuestNodeUserWidget::~UQuestNodeUserWidget() {}
// End Class UQuestNodeUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Public_QuestNodeUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestNodeUserWidget, UQuestNodeUserWidget::StaticClass, TEXT("UQuestNodeUserWidget"), &Z_Registration_Info_UClass_UQuestNodeUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestNodeUserWidget), 2304186564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Public_QuestNodeUserWidget_h_3821617075(TEXT("/Script/NarrativeQuestEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Public_QuestNodeUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Public_QuestNodeUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
