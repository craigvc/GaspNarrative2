// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGraphNode() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CustomEvent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestNode_NoRegister();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References

// Begin Class UQuestGraphNode Function OnEntered
struct Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics
{
	struct QuestGraphNode_eventOnEntered_Parms
	{
		UQuestNode* UpdatedQuestNode;
		bool bActivated;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/*Called when the player reaches this step in the quest\n\x09@param bActivated whether the node was activated, or deactivated. \n\x09*/" },
		{ "ModuleRelativePath", "Private/QuestGraphNode.h" },
		{ "ToolTip", "Called when the player reaches this step in the quest\n       @param bActivated whether the node was activated, or deactivated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdatedQuestNode;
	static void NewProp_bActivated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::NewProp_UpdatedQuestNode = { "UpdatedQuestNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestGraphNode_eventOnEntered_Parms, UpdatedQuestNode), Z_Construct_UClass_UQuestNode_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::NewProp_bActivated_SetBit(void* Obj)
{
	((QuestGraphNode_eventOnEntered_Parms*)Obj)->bActivated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::NewProp_bActivated = { "bActivated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestGraphNode_eventOnEntered_Parms), &Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::NewProp_bActivated_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::NewProp_UpdatedQuestNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::NewProp_bActivated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestGraphNode, nullptr, "OnEntered", nullptr, nullptr, Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::QuestGraphNode_eventOnEntered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::QuestGraphNode_eventOnEntered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestGraphNode_OnEntered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestGraphNode_OnEntered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestGraphNode::execOnEntered)
{
	P_GET_OBJECT(UQuestNode,Z_Param_UpdatedQuestNode);
	P_GET_UBOOL(Z_Param_bActivated);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEntered(Z_Param_UpdatedQuestNode,Z_Param_bActivated);
	P_NATIVE_END;
}
// End Class UQuestGraphNode Function OnEntered

// Begin Class UQuestGraphNode
void UQuestGraphNode::StaticRegisterNativesUQuestGraphNode()
{
	UClass* Class = UQuestGraphNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEntered", &UQuestGraphNode::execOnEntered },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestGraphNode);
UClass* Z_Construct_UClass_UQuestGraphNode_NoRegister()
{
	return UQuestGraphNode::StaticClass();
}
struct Z_Construct_UClass_UQuestGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestGraphNode.h" },
		{ "ModuleRelativePath", "Private/QuestGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/QuestGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/QuestGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestNode_MetaData[] = {
		{ "Comment", "//The quest node associated with this graph node\n" },
		{ "ModuleRelativePath", "Private/QuestGraphNode.h" },
		{ "ToolTip", "The quest node associated with this graph node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnteredCustomNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/QuestGraphNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnEnteredCustomNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestGraphNode_OnEntered, "OnEntered" }, // 1916069204
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestGraphNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestGraphNode, ParentNode), Z_Construct_UClass_UQuestGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentNode_MetaData), NewProp_ParentNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestGraphNode_Statics::NewProp_SubNodes_Inner = { "SubNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestGraphNode_Statics::NewProp_SubNodes = { "SubNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestGraphNode, SubNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubNodes_MetaData), NewProp_SubNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestGraphNode_Statics::NewProp_QuestNode = { "QuestNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestGraphNode, QuestNode), Z_Construct_UClass_UQuestNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestNode_MetaData), NewProp_QuestNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestGraphNode_Statics::NewProp_OnEnteredCustomNode = { "OnEnteredCustomNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestGraphNode, OnEnteredCustomNode), Z_Construct_UClass_UK2Node_CustomEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnteredCustomNode_MetaData), NewProp_OnEnteredCustomNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphNode_Statics::NewProp_ParentNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphNode_Statics::NewProp_SubNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphNode_Statics::NewProp_SubNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphNode_Statics::NewProp_QuestNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphNode_Statics::NewProp_OnEnteredCustomNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestGraphNode_Statics::ClassParams = {
	&UQuestGraphNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQuestGraphNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestGraphNode()
{
	if (!Z_Registration_Info_UClass_UQuestGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestGraphNode.OuterSingleton, Z_Construct_UClass_UQuestGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestGraphNode.OuterSingleton;
}
template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestGraphNode>()
{
	return UQuestGraphNode::StaticClass();
}
UQuestGraphNode::UQuestGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGraphNode);
UQuestGraphNode::~UQuestGraphNode() {}
// End Class UQuestGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestGraphNode, UQuestGraphNode::StaticClass, TEXT("UQuestGraphNode"), &Z_Registration_Info_UClass_UQuestGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestGraphNode), 4010043083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_h_2849544796(TEXT("/Script/NarrativeQuestEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
