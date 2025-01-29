// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/NarrativeNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeNodeBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCondition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeEvent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeNodeBase();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeNodeBase_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTalesComponent_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EEventRuntime();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeNodeBase Function AreConditionsMet
struct Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics
{
	struct NarrativeNodeBase_eventAreConditionsMet_Parms
	{
		APawn* Pawn;
		APlayerController* Controller;
		UTalesComponent* NarrativeComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events & Conditions" },
		{ "Comment", "//Check if all the conditions are met on this quest/dialogue node\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeNodeBase.h" },
		{ "ToolTip", "Check if all the conditions are met on this quest/dialogue node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNodeBase_eventAreConditionsMet_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNodeBase_eventAreConditionsMet_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::NewProp_NarrativeComponent = { "NarrativeComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNodeBase_eventAreConditionsMet_Parms, NarrativeComponent), Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NarrativeComponent_MetaData), NewProp_NarrativeComponent_MetaData) };
void Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNodeBase_eventAreConditionsMet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNodeBase_eventAreConditionsMet_Parms), &Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::NewProp_NarrativeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNodeBase, nullptr, "AreConditionsMet", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::NarrativeNodeBase_eventAreConditionsMet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::NarrativeNodeBase_eventAreConditionsMet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNodeBase::execAreConditionsMet)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_GET_OBJECT(APlayerController,Z_Param_Controller);
	P_GET_OBJECT(UTalesComponent,Z_Param_NarrativeComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AreConditionsMet(Z_Param_Pawn,Z_Param_Controller,Z_Param_NarrativeComponent);
	P_NATIVE_END;
}
// End Class UNarrativeNodeBase Function AreConditionsMet

// Begin Class UNarrativeNodeBase Function ProcessEvents
struct Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics
{
	struct NarrativeNodeBase_eventProcessEvents_Parms
	{
		APawn* Pawn;
		APlayerController* Controller;
		UTalesComponent* NarrativeComponent;
		EEventRuntime Runtime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events & Conditions" },
		{ "Comment", "//Execute all the events on this quest/dialogue node - this is blueprint callable so dialogue UI can call this\n//when a piece of dialogue is spoken\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeNodeBase.h" },
		{ "ToolTip", "Execute all the events on this quest/dialogue node - this is blueprint callable so dialogue UI can call this\nwhen a piece of dialogue is spoken" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Runtime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Runtime_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Runtime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNodeBase_eventProcessEvents_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNodeBase_eventProcessEvents_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::NewProp_NarrativeComponent = { "NarrativeComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNodeBase_eventProcessEvents_Parms, NarrativeComponent), Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NarrativeComponent_MetaData), NewProp_NarrativeComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::NewProp_Runtime_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::NewProp_Runtime = { "Runtime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNodeBase_eventProcessEvents_Parms, Runtime), Z_Construct_UEnum_NarrativeArsenal_EEventRuntime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Runtime_MetaData), NewProp_Runtime_MetaData) }; // 905326616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::NewProp_NarrativeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::NewProp_Runtime_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::NewProp_Runtime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNodeBase, nullptr, "ProcessEvents", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::NarrativeNodeBase_eventProcessEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::NarrativeNodeBase_eventProcessEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNodeBase::execProcessEvents)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_GET_OBJECT(APlayerController,Z_Param_Controller);
	P_GET_OBJECT(UTalesComponent,Z_Param_NarrativeComponent);
	P_GET_ENUM(EEventRuntime,Z_Param_Runtime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessEvents(Z_Param_Pawn,Z_Param_Controller,Z_Param_NarrativeComponent,EEventRuntime(Z_Param_Runtime));
	P_NATIVE_END;
}
// End Class UNarrativeNodeBase Function ProcessEvents

// Begin Class UNarrativeNodeBase
void UNarrativeNodeBase::StaticRegisterNativesUNarrativeNodeBase()
{
	UClass* Class = UNarrativeNodeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AreConditionsMet", &UNarrativeNodeBase::execAreConditionsMet },
		{ "ProcessEvents", &UNarrativeNodeBase::execProcessEvents },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeNodeBase);
UClass* Z_Construct_UClass_UNarrativeNodeBase_NoRegister()
{
	return UNarrativeNodeBase::StaticClass();
}
struct Z_Construct_UClass_UNarrativeNodeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for all narrative nodes in eiher a quest state machine, or a dialogue tree \n */" },
		{ "IncludePath", "Tales/NarrativeNodeBase.h" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeNodeBase.h" },
		{ "ToolTip", "The base class for all narrative nodes in eiher a quest state machine, or a dialogue tree" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodePos_MetaData[] = {
		{ "Comment", "/**The position the graph node is at, we need this because narrative does lots of sorting depending on the nodes Y position*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeNodeBase.h" },
		{ "ToolTip", "The position the graph node is at, we need this because narrative does lots of sorting depending on the nodes Y position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_Inner_MetaData[] = {
		{ "Category", "Events & Conditions" },
		{ "Comment", "/**\n\x09This node only appears if the following conditions are met. Note that currently only dialogues support conditions, they won't do anything in quests!\n\x09\n\x09In multiplayer games the server will check the conditions to ensure your game is server authoritative.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeNodeBase.h" },
		{ "ToolTip", "This node only appears if the following conditions are met. Note that currently only dialogues support conditions, they won't do anything in quests!\n\nIn multiplayer games the server will check the conditions to ensure your game is server authoritative." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[] = {
		{ "Category", "Events & Conditions" },
		{ "Comment", "/**\n\x09This node only appears if the following conditions are met. Note that currently only dialogues support conditions, they won't do anything in quests!\n\x09\n\x09In multiplayer games the server will check the conditions to ensure your game is server authoritative.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeNodeBase.h" },
		{ "ToolTip", "This node only appears if the following conditions are met. Note that currently only dialogues support conditions, they won't do anything in quests!\n\nIn multiplayer games the server will check the conditions to ensure your game is server authoritative." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Events_Inner_MetaData[] = {
		{ "Category", "Events & Conditions" },
		{ "Comment", "/**Events that should fire when this is reached. These are supported by both quests and dialogues, and will fire on both client and server. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeNodeBase.h" },
		{ "ToolTip", "Events that should fire when this is reached. These are supported by both quests and dialogues, and will fire on both client and server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
		{ "Category", "Events & Conditions" },
		{ "Comment", "/**Events that should fire when this is reached. These are supported by both quests and dialogues, and will fire on both client and server. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeNodeBase.h" },
		{ "ToolTip", "Events that should fire when this is reached. These are supported by both quests and dialogues, and will fire on both client and server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**An optional ID for this node, can be left empty*/" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeNodeBase.h" },
		{ "ToolTip", "An optional ID for this node, can be left empty" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodePos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Conditions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Events_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeNodeBase_AreConditionsMet, "AreConditionsMet" }, // 3856284959
		{ &Z_Construct_UFunction_UNarrativeNodeBase_ProcessEvents, "ProcessEvents" }, // 1935489264
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeNodeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeNodeBase_Statics::NewProp_NodePos = { "NodePos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNodeBase, NodePos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodePos_MetaData), NewProp_NodePos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeNodeBase_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditions_Inner_MetaData), NewProp_Conditions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeNodeBase_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNodeBase, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditions_MetaData), NewProp_Conditions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeNodeBase_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Events_Inner_MetaData), NewProp_Events_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeNodeBase_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNodeBase, Events), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Events_MetaData), NewProp_Events_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNarrativeNodeBase_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNodeBase, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeNodeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNodeBase_Statics::NewProp_NodePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNodeBase_Statics::NewProp_Conditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNodeBase_Statics::NewProp_Conditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNodeBase_Statics::NewProp_Events_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNodeBase_Statics::NewProp_Events,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNodeBase_Statics::NewProp_ID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNodeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeNodeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNodeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeNodeBase_Statics::ClassParams = {
	&UNarrativeNodeBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeNodeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNodeBase_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNodeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeNodeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeNodeBase()
{
	if (!Z_Registration_Info_UClass_UNarrativeNodeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeNodeBase.OuterSingleton, Z_Construct_UClass_UNarrativeNodeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeNodeBase.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeNodeBase>()
{
	return UNarrativeNodeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeNodeBase);
UNarrativeNodeBase::~UNarrativeNodeBase() {}
// End Class UNarrativeNodeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeNodeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeNodeBase, UNarrativeNodeBase::StaticClass, TEXT("UNarrativeNodeBase"), &Z_Registration_Info_UClass_UNarrativeNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeNodeBase), 553311796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeNodeBase_h_2111944203(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeNodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeNodeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
