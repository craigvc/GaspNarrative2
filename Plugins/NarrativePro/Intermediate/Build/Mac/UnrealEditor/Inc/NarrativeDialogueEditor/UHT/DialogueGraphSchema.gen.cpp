// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Private/DialogueGraphSchema.h"
#include "NarrativeArsenal/Public/Tales/Dialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraphSchema() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerInfo();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_NoRegister();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphSchema();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphSchema_NoRegister();
NARRATIVEDIALOGUEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment();
NARRATIVEDIALOGUEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode();
UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References

// Begin ScriptStruct FDialogueSchemaAction_NewNode
static_assert(std::is_polymorphic<FDialogueSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FDialogueSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode;
class UScriptStruct* FDialogueSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_NarrativeDialogueEditor(), TEXT("DialogueSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode.OuterSingleton;
}
template<> NARRATIVEDIALOGUEEDITOR_API UScriptStruct* StaticStruct<FDialogueSchemaAction_NewNode>()
{
	return FDialogueSchemaAction_NewNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Private/DialogueGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[] = {
		{ "Comment", "/** Template of node we want to create */" },
		{ "ModuleRelativePath", "Private/DialogueGraphSchema.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerInfo_MetaData[] = {
		{ "Comment", "/**For NPC replies we also pass speaker info along*/" },
		{ "ModuleRelativePath", "Private/DialogueGraphSchema.h" },
		{ "ToolTip", "For NPC replies we also pass speaker info along" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeakerInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueSchemaAction_NewNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueSchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeTemplate_MetaData), NewProp_NodeTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewProp_SpeakerInfo = { "SpeakerInfo", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueSchemaAction_NewNode, SpeakerInfo), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerInfo_MetaData), NewProp_SpeakerInfo_MetaData) }; // 1719779596
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewProp_NodeTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewProp_SpeakerInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"DialogueSchemaAction_NewNode",
	Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::PropPointers),
	sizeof(FDialogueSchemaAction_NewNode),
	alignof(FDialogueSchemaAction_NewNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode.InnerSingleton;
}
// End ScriptStruct FDialogueSchemaAction_NewNode

// Begin ScriptStruct FDialogueSchemaAction_AddComment
static_assert(std::is_polymorphic<FDialogueSchemaAction_AddComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FDialogueSchemaAction_AddComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment;
class UScriptStruct* FDialogueSchemaAction_AddComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment, (UObject*)Z_Construct_UPackage__Script_NarrativeDialogueEditor(), TEXT("DialogueSchemaAction_AddComment"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment.OuterSingleton;
}
template<> NARRATIVEDIALOGUEEDITOR_API UScriptStruct* StaticStruct<FDialogueSchemaAction_AddComment>()
{
	return FDialogueSchemaAction_AddComment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DialogueGraphSchema.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueSchemaAction_AddComment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"DialogueSchemaAction_AddComment",
	nullptr,
	0,
	sizeof(FDialogueSchemaAction_AddComment),
	alignof(FDialogueSchemaAction_AddComment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment.InnerSingleton, Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment.InnerSingleton;
}
// End ScriptStruct FDialogueSchemaAction_AddComment

// Begin Class UDialogueGraphSchema
void UDialogueGraphSchema::StaticRegisterNativesUDialogueGraphSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueGraphSchema);
UClass* Z_Construct_UClass_UDialogueGraphSchema_NoRegister()
{
	return UDialogueGraphSchema::StaticClass();
}
struct Z_Construct_UClass_UDialogueGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueGraphSchema.h" },
		{ "ModuleRelativePath", "Private/DialogueGraphSchema.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogueGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphSchema_Statics::ClassParams = {
	&UDialogueGraphSchema::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueGraphSchema()
{
	if (!Z_Registration_Info_UClass_UDialogueGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphSchema.OuterSingleton, Z_Construct_UClass_UDialogueGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueGraphSchema.OuterSingleton;
}
template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueGraphSchema>()
{
	return UDialogueGraphSchema::StaticClass();
}
UDialogueGraphSchema::UDialogueGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphSchema);
UDialogueGraphSchema::~UDialogueGraphSchema() {}
// End Class UDialogueGraphSchema

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphSchema_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FDialogueSchemaAction_NewNode_Statics::NewStructOps, TEXT("DialogueSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_DialogueSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueSchemaAction_NewNode), 3201880965U) },
		{ FDialogueSchemaAction_AddComment::StaticStruct, Z_Construct_UScriptStruct_FDialogueSchemaAction_AddComment_Statics::NewStructOps, TEXT("DialogueSchemaAction_AddComment"), &Z_Registration_Info_UScriptStruct_DialogueSchemaAction_AddComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueSchemaAction_AddComment), 3819871257U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphSchema, UDialogueGraphSchema::StaticClass, TEXT("UDialogueGraphSchema"), &Z_Registration_Info_UClass_UDialogueGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphSchema), 4235055828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphSchema_h_201831712(TEXT("/Script/NarrativeDialogueEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphSchema_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphSchema_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
