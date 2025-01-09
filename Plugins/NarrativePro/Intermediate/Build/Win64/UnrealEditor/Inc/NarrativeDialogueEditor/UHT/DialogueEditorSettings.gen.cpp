// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Private/DialogueEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueEditorSettings();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueEditorSettings_NoRegister();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueNodeUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References

// Begin Class UDialogueEditorSettings
void UDialogueEditorSettings::StaticRegisterNativesUDialogueEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueEditorSettings);
UClass* Z_Construct_UClass_UDialogueEditorSettings_NoRegister()
{
	return UDialogueEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UDialogueEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueEditorSettings.h" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BacklinkWireColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNPCDialogueClass_MetaData[] = {
		{ "Category", "Graph Defaults" },
		{ "MetaClass", "/Script/NarrativeArsenal.DialogueNode_NPC" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerDialogueClass_MetaData[] = {
		{ "Category", "Graph Defaults" },
		{ "MetaClass", "/Script/NarrativeArsenal.DialogueNode_Player" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDialogueClass_MetaData[] = {
		{ "Category", "Graph Defaults" },
		{ "MetaClass", "/Script/NarrativeArsenal.Dialogue" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDialogueWidgetClass_MetaData[] = {
		{ "Category", "Graph Defaults" },
		{ "MetaClass", "/Script/NarrativeDialogueEditor.DialogueNodeUserWidget" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWarnings_MetaData[] = {
		{ "Category", "Graph Options" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarnMissingSoundCues_MetaData[] = {
		{ "Category", "Graph Options" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarnMissingAnims_MetaData[] = {
		{ "Category", "Graph Options" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSplineHorizontalDeltaRange_MetaData[] = {
		{ "Category", "Splines" },
		{ "Comment", "/** The maximum value to clamp the absolute value of the horizontal distance between endpoints when calculating tangents (when the wire is moving forward) */" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
		{ "ToolTip", "The maximum value to clamp the absolute value of the horizontal distance between endpoints when calculating tangents (when the wire is moving forward)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSplineVerticalDeltaRange_MetaData[] = {
		{ "Category", "Splines" },
		{ "Comment", "/** The maximum value to clamp the absolute value of the vertical distance between endpoints when calculating tangents (when the wire is moving forward) */" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
		{ "ToolTip", "The maximum value to clamp the absolute value of the vertical distance between endpoints when calculating tangents (when the wire is moving forward)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSplineTangentFromHorizontalDelta_MetaData[] = {
		{ "Category", "Splines" },
		{ "Comment", "/** The amount that the horizontal delta affects the generated tangent handle of splines (when the wire is moving forward) */" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
		{ "ToolTip", "The amount that the horizontal delta affects the generated tangent handle of splines (when the wire is moving forward)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSplineTangentFromVerticalDelta_MetaData[] = {
		{ "Category", "Splines" },
		{ "Comment", "/** The amount that the vertical delta affects the generated tangent handle of splines (when the wire is moving forward) */" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
		{ "ToolTip", "The amount that the vertical delta affects the generated tangent handle of splines (when the wire is moving forward)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardSplineHorizontalDeltaRange_MetaData[] = {
		{ "Category", "Splines" },
		{ "Comment", "/** The maximum value to clamp the absolute value of the horizontal distance between endpoints when calculating tangents (when the wire is moving backwards) */" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
		{ "ToolTip", "The maximum value to clamp the absolute value of the horizontal distance between endpoints when calculating tangents (when the wire is moving backwards)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardSplineVerticalDeltaRange_MetaData[] = {
		{ "Category", "Splines" },
		{ "Comment", "/** The maximum value to clamp the absolute value of the vertical distance between endpoints when calculating tangents (when the wire is moving backwards) */" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
		{ "ToolTip", "The maximum value to clamp the absolute value of the vertical distance between endpoints when calculating tangents (when the wire is moving backwards)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardSplineTangentFromHorizontalDelta_MetaData[] = {
		{ "Category", "Splines" },
		{ "Comment", "/** The amount that the horizontal delta affects the generated tangent handle of splines (when the wire is moving backwards) */" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
		{ "ToolTip", "The amount that the horizontal delta affects the generated tangent handle of splines (when the wire is moving backwards)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardSplineTangentFromVerticalDelta_MetaData[] = {
		{ "Category", "Splines" },
		{ "Comment", "/** The amount that the vertical delta affects the generated tangent handle of splines (when the wire is moving backwards) */" },
		{ "ModuleRelativePath", "Private/DialogueEditorSettings.h" },
		{ "ToolTip", "The amount that the vertical delta affects the generated tangent handle of splines (when the wire is moving backwards)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NPCNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BacklinkWireColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultNPCDialogueClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPlayerDialogueClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDialogueClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultDialogueWidgetClass;
	static void NewProp_bEnableWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWarnings;
	static void NewProp_bWarnMissingSoundCues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnMissingSoundCues;
	static void NewProp_bWarnMissingAnims_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnMissingAnims;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardSplineHorizontalDeltaRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardSplineVerticalDeltaRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardSplineTangentFromHorizontalDelta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardSplineTangentFromVerticalDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackwardSplineHorizontalDeltaRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackwardSplineVerticalDeltaRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackwardSplineTangentFromHorizontalDelta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackwardSplineTangentFromVerticalDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_RootNodeColor = { "RootNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, RootNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootNodeColor_MetaData), NewProp_RootNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_PlayerNodeColor = { "PlayerNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, PlayerNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNodeColor_MetaData), NewProp_PlayerNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_NPCNodeColor = { "NPCNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, NPCNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCNodeColor_MetaData), NewProp_NPCNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_BacklinkWireColor = { "BacklinkWireColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, BacklinkWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BacklinkWireColor_MetaData), NewProp_BacklinkWireColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultNPCDialogueClass = { "DefaultNPCDialogueClass", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, DefaultNPCDialogueClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultNPCDialogueClass_MetaData), NewProp_DefaultNPCDialogueClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultPlayerDialogueClass = { "DefaultPlayerDialogueClass", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, DefaultPlayerDialogueClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPlayerDialogueClass_MetaData), NewProp_DefaultPlayerDialogueClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultDialogueClass = { "DefaultDialogueClass", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, DefaultDialogueClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDialogueClass_MetaData), NewProp_DefaultDialogueClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultDialogueWidgetClass = { "DefaultDialogueWidgetClass", nullptr, (EPropertyFlags)0x0014000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, DefaultDialogueWidgetClass), Z_Construct_UClass_UDialogueNodeUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDialogueWidgetClass_MetaData), NewProp_DefaultDialogueWidgetClass_MetaData) };
void Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bEnableWarnings_SetBit(void* Obj)
{
	((UDialogueEditorSettings*)Obj)->bEnableWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bEnableWarnings = { "bEnableWarnings", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogueEditorSettings), &Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bEnableWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableWarnings_MetaData), NewProp_bEnableWarnings_MetaData) };
void Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingSoundCues_SetBit(void* Obj)
{
	((UDialogueEditorSettings*)Obj)->bWarnMissingSoundCues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingSoundCues = { "bWarnMissingSoundCues", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogueEditorSettings), &Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingSoundCues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarnMissingSoundCues_MetaData), NewProp_bWarnMissingSoundCues_MetaData) };
void Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingAnims_SetBit(void* Obj)
{
	((UDialogueEditorSettings*)Obj)->bWarnMissingAnims = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingAnims = { "bWarnMissingAnims", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogueEditorSettings), &Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingAnims_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarnMissingAnims_MetaData), NewProp_bWarnMissingAnims_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_ForwardSplineHorizontalDeltaRange = { "ForwardSplineHorizontalDeltaRange", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, ForwardSplineHorizontalDeltaRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardSplineHorizontalDeltaRange_MetaData), NewProp_ForwardSplineHorizontalDeltaRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_ForwardSplineVerticalDeltaRange = { "ForwardSplineVerticalDeltaRange", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, ForwardSplineVerticalDeltaRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardSplineVerticalDeltaRange_MetaData), NewProp_ForwardSplineVerticalDeltaRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_ForwardSplineTangentFromHorizontalDelta = { "ForwardSplineTangentFromHorizontalDelta", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, ForwardSplineTangentFromHorizontalDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardSplineTangentFromHorizontalDelta_MetaData), NewProp_ForwardSplineTangentFromHorizontalDelta_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_ForwardSplineTangentFromVerticalDelta = { "ForwardSplineTangentFromVerticalDelta", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, ForwardSplineTangentFromVerticalDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardSplineTangentFromVerticalDelta_MetaData), NewProp_ForwardSplineTangentFromVerticalDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_BackwardSplineHorizontalDeltaRange = { "BackwardSplineHorizontalDeltaRange", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, BackwardSplineHorizontalDeltaRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardSplineHorizontalDeltaRange_MetaData), NewProp_BackwardSplineHorizontalDeltaRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_BackwardSplineVerticalDeltaRange = { "BackwardSplineVerticalDeltaRange", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, BackwardSplineVerticalDeltaRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardSplineVerticalDeltaRange_MetaData), NewProp_BackwardSplineVerticalDeltaRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_BackwardSplineTangentFromHorizontalDelta = { "BackwardSplineTangentFromHorizontalDelta", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, BackwardSplineTangentFromHorizontalDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardSplineTangentFromHorizontalDelta_MetaData), NewProp_BackwardSplineTangentFromHorizontalDelta_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_BackwardSplineTangentFromVerticalDelta = { "BackwardSplineTangentFromVerticalDelta", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueEditorSettings, BackwardSplineTangentFromVerticalDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardSplineTangentFromVerticalDelta_MetaData), NewProp_BackwardSplineTangentFromVerticalDelta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_RootNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_PlayerNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_NPCNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_BacklinkWireColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultNPCDialogueClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultPlayerDialogueClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultDialogueClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_DefaultDialogueWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bEnableWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingSoundCues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_bWarnMissingAnims,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_ForwardSplineHorizontalDeltaRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_ForwardSplineVerticalDeltaRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_ForwardSplineTangentFromHorizontalDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_ForwardSplineTangentFromVerticalDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_BackwardSplineHorizontalDeltaRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_BackwardSplineVerticalDeltaRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_BackwardSplineTangentFromHorizontalDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditorSettings_Statics::NewProp_BackwardSplineTangentFromVerticalDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueEditorSettings_Statics::ClassParams = {
	&UDialogueEditorSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogueEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueEditorSettings()
{
	if (!Z_Registration_Info_UClass_UDialogueEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueEditorSettings.OuterSingleton, Z_Construct_UClass_UDialogueEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueEditorSettings.OuterSingleton;
}
template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueEditorSettings>()
{
	return UDialogueEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueEditorSettings);
UDialogueEditorSettings::~UDialogueEditorSettings() {}
// End Class UDialogueEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueEditorSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueEditorSettings, UDialogueEditorSettings::StaticClass, TEXT("UDialogueEditorSettings"), &Z_Registration_Info_UClass_UDialogueEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueEditorSettings), 2100094630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueEditorSettings_h_2341132738(TEXT("/Script/NarrativeDialogueEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueEditorSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
