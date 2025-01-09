// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Private/DialogueGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraphNode() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CustomEvent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogueNode_NoRegister();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References

// Begin Class UDialogueGraphNode Function OnStartedOrFinished
struct Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics
{
	struct DialogueGraphNode_eventOnStartedOrFinished_Parms
	{
		UDialogueNode* Node;
		bool bStarted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DialogueGraphNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static void NewProp_bStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStarted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueGraphNode_eventOnStartedOrFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::NewProp_bStarted_SetBit(void* Obj)
{
	((DialogueGraphNode_eventOnStartedOrFinished_Parms*)Obj)->bStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::NewProp_bStarted = { "bStarted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueGraphNode_eventOnStartedOrFinished_Parms), &Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::NewProp_bStarted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::NewProp_bStarted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueGraphNode, nullptr, "OnStartedOrFinished", nullptr, nullptr, Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::DialogueGraphNode_eventOnStartedOrFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::DialogueGraphNode_eventOnStartedOrFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueGraphNode::execOnStartedOrFinished)
{
	P_GET_OBJECT(UDialogueNode,Z_Param_Node);
	P_GET_UBOOL(Z_Param_bStarted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStartedOrFinished(Z_Param_Node,Z_Param_bStarted);
	P_NATIVE_END;
}
// End Class UDialogueGraphNode Function OnStartedOrFinished

// Begin Class UDialogueGraphNode
void UDialogueGraphNode::StaticRegisterNativesUDialogueGraphNode()
{
	UClass* Class = UDialogueGraphNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnStartedOrFinished", &UDialogueGraphNode::execOnStartedOrFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueGraphNode);
UClass* Z_Construct_UClass_UDialogueGraphNode_NoRegister()
{
	return UDialogueGraphNode::StaticClass();
}
struct Z_Construct_UClass_UDialogueGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueGraphNode.h" },
		{ "ModuleRelativePath", "Private/DialogueGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/DialogueGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/DialogueGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueNode_MetaData[] = {
		{ "Comment", "//The Dialogue node associated with this graph node\n" },
		{ "ModuleRelativePath", "Private/DialogueGraphNode.h" },
		{ "ToolTip", "The Dialogue node associated with this graph node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayedCustomNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/DialogueGraphNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnPlayedCustomNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueGraphNode_OnStartedOrFinished, "OnStartedOrFinished" }, // 1363896172
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueGraphNode, ParentNode), Z_Construct_UClass_UDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentNode_MetaData), NewProp_ParentNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_SubNodes_Inner = { "SubNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_SubNodes = { "SubNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueGraphNode, SubNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubNodes_MetaData), NewProp_SubNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_DialogueNode = { "DialogueNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueGraphNode, DialogueNode), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueNode_MetaData), NewProp_DialogueNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_OnPlayedCustomNode = { "OnPlayedCustomNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueGraphNode, OnPlayedCustomNode), Z_Construct_UClass_UK2Node_CustomEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayedCustomNode_MetaData), NewProp_OnPlayedCustomNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_ParentNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_SubNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_SubNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_DialogueNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_OnPlayedCustomNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphNode_Statics::ClassParams = {
	&UDialogueGraphNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogueGraphNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueGraphNode()
{
	if (!Z_Registration_Info_UClass_UDialogueGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphNode.OuterSingleton, Z_Construct_UClass_UDialogueGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueGraphNode.OuterSingleton;
}
template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueGraphNode>()
{
	return UDialogueGraphNode::StaticClass();
}
UDialogueGraphNode::UDialogueGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphNode);
UDialogueGraphNode::~UDialogueGraphNode() {}
// End Class UDialogueGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphNode, UDialogueGraphNode::StaticClass, TEXT("UDialogueGraphNode"), &Z_Registration_Info_UClass_UDialogueGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphNode), 640153366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_h_226486817(TEXT("/Script/NarrativeDialogueEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
