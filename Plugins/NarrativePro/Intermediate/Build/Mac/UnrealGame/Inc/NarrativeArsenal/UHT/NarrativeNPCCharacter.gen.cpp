// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeNPCCharacter.h"
#include "NarrativeSaveSystem/Public/NarrativeSave.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeNPCCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacter();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCCharacter();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCInteractable_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedDialogue();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableActor_NoRegister();
NARRATIVESAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeActorRecord();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FTaggedDialogue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TaggedDialogue;
class UScriptStruct* FTaggedDialogue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TaggedDialogue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TaggedDialogue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaggedDialogue, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("TaggedDialogue"));
	}
	return Z_Registration_Info_UScriptStruct_TaggedDialogue.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FTaggedDialogue>()
{
	return FTaggedDialogue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTaggedDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Represents a tagged dialogue - this is essentially a dialogue that can be kicked off via a tag \"TaggedDialogue.Taunt, TaggedDialogue.Greet, etc. \"\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Represents a tagged dialogue - this is essentially a dialogue that can be kicked off via a tag \"TaggedDialogue.Taunt, TaggedDialogue.Greet, etc. \"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Categories", "Narrative.TaggedDialogue" },
		{ "Category", "Tagged Dialogue" },
		{ "Comment", "/** The tag that will kick off this dialogue. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The tag that will kick off this dialogue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[] = {
		{ "Category", "Tagged Dialogue" },
		{ "Comment", "/** The dialogue to begin */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The dialogue to begin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Tagged Dialogue" },
		{ "Comment", "/** Instigator needs to be less than this many units away to play the dialogue. Negative means don't check  */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Instigator needs to be less than this many units away to play the dialogue. Negative means don't check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chance_MetaData[] = {
		{ "Category", "Tagged Dialogue" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The chance of this dialogue beginning, for example  */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The chance of this dialogue beginning, for example" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[] = {
		{ "Category", "Tagged Dialogue" },
		{ "Comment", "/** The amount of time we should cooldown before playing this dialogue again. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The amount of time we should cooldown before playing this dialogue again." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[] = {
		{ "Category", "Tagged Dialogue" },
		{ "Comment", "/** Tags that will be required for the NPC to begin this tagged dialogue */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Tags that will be required for the NPC to begin this tagged dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedTags_MetaData[] = {
		{ "Category", "Tagged Dialogue" },
		{ "Comment", "/** Tags that if owned by the NPC, will prevent this dialogue beginning. For example, we wouldn't want to greet a player if we were fighting someone. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Tags that if owned by the NPC, will prevent this dialogue beginning. For example, we wouldn't want to greet a player if we were fighting someone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPlayTime_MetaData[] = {
		{ "Category", "Tagged Dialogue" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Chance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastPlayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaggedDialogue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialogue_MetaData), NewProp_Dialogue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, Chance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chance_MetaData), NewProp_Chance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, Cooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cooldown_MetaData), NewProp_Cooldown_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTags_MetaData), NewProp_RequiredTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_BlockedTags = { "BlockedTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, BlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedTags_MetaData), NewProp_BlockedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_LastPlayTime = { "LastPlayTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, LastPlayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPlayTime_MetaData), NewProp_LastPlayTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaggedDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_Chance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_Cooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_RequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_BlockedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_LastPlayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"TaggedDialogue",
	Z_Construct_UScriptStruct_FTaggedDialogue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedDialogue_Statics::PropPointers),
	sizeof(FTaggedDialogue),
	alignof(FTaggedDialogue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedDialogue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTaggedDialogue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTaggedDialogue()
{
	if (!Z_Registration_Info_UScriptStruct_TaggedDialogue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TaggedDialogue.InnerSingleton, Z_Construct_UScriptStruct_FTaggedDialogue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TaggedDialogue.InnerSingleton;
}
// End ScriptStruct FTaggedDialogue

// Begin Class ANarrativeNPCCharacter Function ExecutePlayTaggedDialogue
struct NarrativeNPCCharacter_eventExecutePlayTaggedDialogue_Parms
{
	FTaggedDialogue Dialogue;
	AActor* DialogueInstigator;
};
static const FName NAME_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue = FName(TEXT("ExecutePlayTaggedDialogue"));
void ANarrativeNPCCharacter::ExecutePlayTaggedDialogue(FTaggedDialogue Dialogue, AActor* DialogueInstigator)
{
	NarrativeNPCCharacter_eventExecutePlayTaggedDialogue_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.DialogueInstigator=DialogueInstigator;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC" },
		{ "Comment", "//Notify the NPC a tagged dialogue should try play - this is blueprint implementable \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Notify the NPC a tagged dialogue should try play - this is blueprint implementable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueInstigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventExecutePlayTaggedDialogue_Parms, Dialogue), Z_Construct_UScriptStruct_FTaggedDialogue, METADATA_PARAMS(0, nullptr) }; // 1666674158
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::NewProp_DialogueInstigator = { "DialogueInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventExecutePlayTaggedDialogue_Parms, DialogueInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::NewProp_DialogueInstigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "ExecutePlayTaggedDialogue", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::PropPointers), sizeof(NarrativeNPCCharacter_eventExecutePlayTaggedDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeNPCCharacter_eventExecutePlayTaggedDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativeNPCCharacter Function ExecutePlayTaggedDialogue

// Begin Class ANarrativeNPCCharacter Function GetActivityComponent
struct Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics
{
	struct NarrativeNPCCharacter_eventGetActivityComponent_Parms
	{
		UNPCActivityComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventGetActivityComponent_Parms, ReturnValue), Z_Construct_UClass_UNPCActivityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "GetActivityComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::NarrativeNPCCharacter_eventGetActivityComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::NarrativeNPCCharacter_eventGetActivityComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execGetActivityComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNPCActivityComponent**)Z_Param__Result=P_THIS->GetActivityComponent();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function GetActivityComponent

// Begin Class ANarrativeNPCCharacter Function GetInventoryComponent
struct Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent_Statics
{
	struct NarrativeNPCCharacter_eventGetInventoryComponent_Parms
	{
		UNarrativeInventoryComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventGetInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "GetInventoryComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent_Statics::NarrativeNPCCharacter_eventGetInventoryComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent_Statics::NarrativeNPCCharacter_eventGetInventoryComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execGetInventoryComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeInventoryComponent**)Z_Param__Result=P_THIS->GetInventoryComponent();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function GetInventoryComponent

// Begin Class ANarrativeNPCCharacter Function GetNPCController
struct Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics
{
	struct NarrativeNPCCharacter_eventGetNPCController_Parms
	{
		ANarrativeNPCController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventGetNPCController_Parms, ReturnValue), Z_Construct_UClass_ANarrativeNPCController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "GetNPCController", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::NarrativeNPCCharacter_eventGetNPCController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::NarrativeNPCCharacter_eventGetNPCController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execGetNPCController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeNPCController**)Z_Param__Result=P_THIS->GetNPCController();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function GetNPCController

// Begin Class ANarrativeNPCCharacter Function GetNPCName
struct Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics
{
	struct NarrativeNPCCharacter_eventGetNPCName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC" },
		{ "Comment", "//Grab the NPCs name\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Grab the NPCs name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventGetNPCName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "GetNPCName", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::NarrativeNPCCharacter_eventGetNPCName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::NarrativeNPCCharacter_eventGetNPCName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execGetNPCName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetNPCName();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function GetNPCName

// Begin Class ANarrativeNPCCharacter Function GetTradingInventoryComponent
struct Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics
{
	struct NarrativeNPCCharacter_eventGetTradingInventoryComponent_Parms
	{
		UNarrativeInventoryComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventGetTradingInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "GetTradingInventoryComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::NarrativeNPCCharacter_eventGetTradingInventoryComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::NarrativeNPCCharacter_eventGetTradingInventoryComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execGetTradingInventoryComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeInventoryComponent**)Z_Param__Result=P_THIS->GetTradingInventoryComponent();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function GetTradingInventoryComponent

// Begin Class ANarrativeNPCCharacter Function NPCDataReady
static const FName NAME_ANarrativeNPCCharacter_NPCDataReady = FName(TEXT("NPCDataReady"));
void ANarrativeNPCCharacter::NPCDataReady()
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeNPCCharacter_NPCDataReady);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ANarrativeNPCCharacter_NPCDataReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_NPCDataReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "NPCDataReady", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_NPCDataReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_NPCDataReady_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_NPCDataReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_NPCDataReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativeNPCCharacter Function NPCDataReady

// Begin Class ANarrativeNPCCharacter Function OnRep_NPCData
struct Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "OnRep_NPCData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execOnRep_NPCData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_NPCData();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function OnRep_NPCData

// Begin Class ANarrativeNPCCharacter Function OnRep_NPCFactions
struct Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCFactions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCFactions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "OnRep_NPCFactions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCFactions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCFactions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCFactions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCFactions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execOnRep_NPCFactions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_NPCFactions();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function OnRep_NPCFactions

// Begin Class ANarrativeNPCCharacter Function PlayTaggedDialogue
struct Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics
{
	struct NarrativeNPCCharacter_eventPlayTaggedDialogue_Parms
	{
		FGameplayTag Tag;
		AActor* DialogueInstigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC" },
		{ "Comment", "//Notify the NPC a tagged dialogue should try play, like a greeting, farewell, taunt, etc. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Notify the NPC a tagged dialogue should try play, like a greeting, farewell, taunt, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Categories", "Narrative.TaggedDialogue" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueInstigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventPlayTaggedDialogue_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::NewProp_DialogueInstigator = { "DialogueInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventPlayTaggedDialogue_Parms, DialogueInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::NewProp_DialogueInstigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "PlayTaggedDialogue", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::NarrativeNPCCharacter_eventPlayTaggedDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::NarrativeNPCCharacter_eventPlayTaggedDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execPlayTaggedDialogue)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_OBJECT(AActor,Z_Param_DialogueInstigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayTaggedDialogue(Z_Param_Tag,Z_Param_DialogueInstigator);
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function PlayTaggedDialogue

// Begin Class ANarrativeNPCCharacter Function ShouldBeAggressiveTowardsTarget
struct NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms
{
	const AActor* Target;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget = FName(TEXT("ShouldBeAggressiveTowardsTarget"));
bool ANarrativeNPCCharacter::ShouldBeAggressiveTowardsTarget(const AActor* Target) const
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms Parms;
		Parms.Target=Target;
		const_cast<ANarrativeNPCCharacter*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANarrativeNPCCharacter*>(this)->ShouldBeAggressiveTowardsTarget_Implementation(Target);
	}
}
struct Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hostiles" },
		{ "Comment", "/**Allows a chance to let us be hostile towards any perceived target if you return true, even if they aren't in a hostile faction. \n\x09This would let you do things like have friendly NPCs turn on the player if you've damaged them enough, etc. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Allows a chance to let us be hostile towards any perceived target if you return true, even if they aren't in a hostile faction.\n       This would let you do things like have friendly NPCs turn on the player if you've damaged them enough, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms), &Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "ShouldBeAggressiveTowardsTarget", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::PropPointers), sizeof(NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execShouldBeAggressiveTowardsTarget)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldBeAggressiveTowardsTarget_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function ShouldBeAggressiveTowardsTarget

// Begin Class ANarrativeNPCCharacter
void ANarrativeNPCCharacter::StaticRegisterNativesANarrativeNPCCharacter()
{
	UClass* Class = ANarrativeNPCCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActivityComponent", &ANarrativeNPCCharacter::execGetActivityComponent },
		{ "GetInventoryComponent", &ANarrativeNPCCharacter::execGetInventoryComponent },
		{ "GetNPCController", &ANarrativeNPCCharacter::execGetNPCController },
		{ "GetNPCName", &ANarrativeNPCCharacter::execGetNPCName },
		{ "GetTradingInventoryComponent", &ANarrativeNPCCharacter::execGetTradingInventoryComponent },
		{ "OnRep_NPCData", &ANarrativeNPCCharacter::execOnRep_NPCData },
		{ "OnRep_NPCFactions", &ANarrativeNPCCharacter::execOnRep_NPCFactions },
		{ "PlayTaggedDialogue", &ANarrativeNPCCharacter::execPlayTaggedDialogue },
		{ "ShouldBeAggressiveTowardsTarget", &ANarrativeNPCCharacter::execShouldBeAggressiveTowardsTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativeNPCCharacter);
UClass* Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister()
{
	return ANarrativeNPCCharacter::StaticClass();
}
struct Z_Construct_UClass_ANarrativeNPCCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for a NarrativeCharacter that is AI Controlled. \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for a NarrativeCharacter that is AI Controlled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TradingInventoryComponent_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "Comment", "//NPCs have a seperate inventory for trading from. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "NPCs have a seperate inventory for trading from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCInteractableComponent_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AICRecord_MetaData[] = {
		{ "Comment", "//In order to link NPCs and their AIController save records, we have NPCs store their AIC record. That works nicely. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "In order to link NPCs and their AIController save records, we have NPCs store their AIC record. That works nicely." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCData_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** The NPCs data asset - this is set automatically by the NPC subsystem when it detects the NPC has spawned in */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The NPCs data asset - this is set automatically by the NPC subsystem when it detects the NPC has spawned in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningSettlement_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** References the settlement that last spawned us, if one did.  */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "References the settlement that last spawned us, if one did." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningSpawn_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** Settlement spawn ID */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Settlement spawn ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCLevel_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** This NPCs level - NPCs levels are defined by their NPC asset */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "This NPCs level - NPCs levels are defined by their NPC asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCFactions_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** This NPCs faction - can be changed at anytime and will be saved to disk */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "This NPCs faction - can be changed at anytime and will be saved to disk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAggressiveOnTakeDamage_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** If true, this NPC will start attacking anyone that causes damage to them, provided they aren't in the same faction. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "If true, this NPC will start attacking anyone that causes damage to them, provided they aren't in the same faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaggedDialogues_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** If true, this NPC will start attacking anyone that causes damage to them, provided they aren't in the same faction. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "If true, this NPC will start attacking anyone that causes damage to them, provided they aren't in the same faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hostiles_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** Consider anything in this list a \"hostile override\" - that is to say even if the actor is neutral or even friendly, we'll treat them as a hostile and attack.\n\x09We need this because there are occasions where we want friendlies to attack each other, maybe during a quest. We also often want to attack neutrals that have attacked us. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Consider anything in this list a \"hostile override\" - that is to say even if the actor is neutral or even friendly, we'll treat them as a hostile and attack.\n      We need this because there are occasions where we want friendlies to attack each other, maybe during a quest. We also often want to attack neutrals that have attacked us." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TradingInventoryComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCInteractableComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AICRecord;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwningSettlement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwningSpawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NPCLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NPCFactions;
	static void NewProp_bAggressiveOnTakeDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAggressiveOnTakeDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaggedDialogues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaggedDialogues;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hostiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hostiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue, "ExecutePlayTaggedDialogue" }, // 3498575155
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent, "GetActivityComponent" }, // 901961117
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_GetInventoryComponent, "GetInventoryComponent" }, // 3506942383
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController, "GetNPCController" }, // 1467414764
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName, "GetNPCName" }, // 624923137
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent, "GetTradingInventoryComponent" }, // 4133761756
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_NPCDataReady, "NPCDataReady" }, // 2407415416
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCData, "OnRep_NPCData" }, // 3922941366
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCFactions, "OnRep_NPCFactions" }, // 4038828497
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue, "PlayTaggedDialogue" }, // 291977788
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget, "ShouldBeAggressiveTowardsTarget" }, // 2381852121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeNPCCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, InventoryComponent), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_TradingInventoryComponent = { "TradingInventoryComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, TradingInventoryComponent), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TradingInventoryComponent_MetaData), NewProp_TradingInventoryComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCInteractableComponent = { "NPCInteractableComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, NPCInteractableComponent), Z_Construct_UClass_UNPCInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCInteractableComponent_MetaData), NewProp_NPCInteractableComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_AICRecord = { "AICRecord", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, AICRecord), Z_Construct_UScriptStruct_FNarrativeActorRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AICRecord_MetaData), NewProp_AICRecord_MetaData) }; // 1167937850
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCData = { "NPCData", "OnRep_NPCData", (EPropertyFlags)0x0124080100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, NPCData), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCData_MetaData), NewProp_NPCData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_OwningSettlement = { "OwningSettlement", nullptr, (EPropertyFlags)0x0020080001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, OwningSettlement), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningSettlement_MetaData), NewProp_OwningSettlement_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_OwningSpawn = { "OwningSpawn", nullptr, (EPropertyFlags)0x0020080001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, OwningSpawn), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningSpawn_MetaData), NewProp_OwningSpawn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCLevel = { "NPCLevel", nullptr, (EPropertyFlags)0x0020080001020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, NPCLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCLevel_MetaData), NewProp_NPCLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCFactions = { "NPCFactions", "OnRep_NPCFactions", (EPropertyFlags)0x0020080101020035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, NPCFactions), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCFactions_MetaData), NewProp_NPCFactions_MetaData) }; // 3352185621
void Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_bAggressiveOnTakeDamage_SetBit(void* Obj)
{
	((ANarrativeNPCCharacter*)Obj)->bAggressiveOnTakeDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_bAggressiveOnTakeDamage = { "bAggressiveOnTakeDamage", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANarrativeNPCCharacter), &Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_bAggressiveOnTakeDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAggressiveOnTakeDamage_MetaData), NewProp_bAggressiveOnTakeDamage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_TaggedDialogues_Inner = { "TaggedDialogues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTaggedDialogue, METADATA_PARAMS(0, nullptr) }; // 1666674158
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_TaggedDialogues = { "TaggedDialogues", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, TaggedDialogues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaggedDialogues_MetaData), NewProp_TaggedDialogues_MetaData) }; // 1666674158
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_Hostiles_Inner = { "Hostiles", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_Hostiles = { "Hostiles", nullptr, (EPropertyFlags)0x0124080000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, Hostiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hostiles_MetaData), NewProp_Hostiles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativeNPCCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_InventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_TradingInventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCInteractableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_AICRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_OwningSettlement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_OwningSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCFactions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_bAggressiveOnTakeDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_TaggedDialogues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_TaggedDialogues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_Hostiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_Hostiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeNPCCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativeNPCCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANarrativeCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeNPCCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableActor_NoRegister, (int32)VTABLE_OFFSET(ANarrativeNPCCharacter, INarrativeSavableActor), false },  // 2545445142
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::ClassParams = {
	&ANarrativeNPCCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANarrativeNPCCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeNPCCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeNPCCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativeNPCCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativeNPCCharacter()
{
	if (!Z_Registration_Info_UClass_ANarrativeNPCCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativeNPCCharacter.OuterSingleton, Z_Construct_UClass_ANarrativeNPCCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativeNPCCharacter.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativeNPCCharacter>()
{
	return ANarrativeNPCCharacter::StaticClass();
}
void ANarrativeNPCCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_NPCData(TEXT("NPCData"));
	static const FName Name_NPCLevel(TEXT("NPCLevel"));
	static const FName Name_NPCFactions(TEXT("NPCFactions"));
	const bool bIsValid = true
		&& Name_NPCData == ClassReps[(int32)ENetFields_Private::NPCData].Property->GetFName()
		&& Name_NPCLevel == ClassReps[(int32)ENetFields_Private::NPCLevel].Property->GetFName()
		&& Name_NPCFactions == ClassReps[(int32)ENetFields_Private::NPCFactions].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANarrativeNPCCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativeNPCCharacter);
ANarrativeNPCCharacter::~ANarrativeNPCCharacter() {}
// End Class ANarrativeNPCCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTaggedDialogue::StaticStruct, Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewStructOps, TEXT("TaggedDialogue"), &Z_Registration_Info_UScriptStruct_TaggedDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaggedDialogue), 1666674158U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativeNPCCharacter, ANarrativeNPCCharacter::StaticClass, TEXT("ANarrativeNPCCharacter"), &Z_Registration_Info_UClass_ANarrativeNPCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeNPCCharacter), 1540272174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_2536574467(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
