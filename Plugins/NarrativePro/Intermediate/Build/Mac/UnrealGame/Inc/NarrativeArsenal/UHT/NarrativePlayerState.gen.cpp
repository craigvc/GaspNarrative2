// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativePlayerState.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativePlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerState();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerState_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAttributeSetBase_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USkillTreeComponent_NoRegister();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class ANarrativePlayerState Function GetHealth
struct Z_Construct_UFunction_ANarrativePlayerState_GetHealth_Statics
{
	struct NarrativePlayerState_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativePlayerState_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerState_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerState_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerState_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerState_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerState, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerState_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerState_GetHealth_Statics::NarrativePlayerState_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerState_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerState_GetHealth_Statics::NarrativePlayerState_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerState_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerState_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerState::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class ANarrativePlayerState Function GetHealth

// Begin Class ANarrativePlayerState Function GetInventoryComponent
struct Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent_Statics
{
	struct NarrativePlayerState_eventGetInventoryComponent_Parms
	{
		UNarrativeInventoryComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerState_eventGetInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerState, nullptr, "GetInventoryComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent_Statics::NarrativePlayerState_eventGetInventoryComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent_Statics::NarrativePlayerState_eventGetInventoryComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerState::execGetInventoryComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeInventoryComponent**)Z_Param__Result=P_THIS->GetInventoryComponent();
	P_NATIVE_END;
}
// End Class ANarrativePlayerState Function GetInventoryComponent

// Begin Class ANarrativePlayerState Function GetSkillTreeComponent
struct Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent_Statics
{
	struct NarrativePlayerState_eventGetSkillTreeComponent_Parms
	{
		USkillTreeComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerState_eventGetSkillTreeComponent_Parms, ReturnValue), Z_Construct_UClass_USkillTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerState, nullptr, "GetSkillTreeComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent_Statics::NarrativePlayerState_eventGetSkillTreeComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent_Statics::NarrativePlayerState_eventGetSkillTreeComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerState::execGetSkillTreeComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkillTreeComponent**)Z_Param__Result=P_THIS->GetSkillTreeComponent();
	P_NATIVE_END;
}
// End Class ANarrativePlayerState Function GetSkillTreeComponent

// Begin Class ANarrativePlayerState Function IsAlive
struct Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics
{
	struct NarrativePlayerState_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativePlayerState_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativePlayerState_eventIsAlive_Parms), &Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerState, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics::NarrativePlayerState_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics::NarrativePlayerState_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerState_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerState_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerState::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class ANarrativePlayerState Function IsAlive

// Begin Class ANarrativePlayerState Function OnRep_Faction
struct Z_Construct_UFunction_ANarrativePlayerState_OnRep_Faction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerState_OnRep_Faction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerState, nullptr, "OnRep_Faction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_OnRep_Faction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerState_OnRep_Faction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativePlayerState_OnRep_Faction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerState_OnRep_Faction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerState::execOnRep_Faction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Faction();
	P_NATIVE_END;
}
// End Class ANarrativePlayerState Function OnRep_Faction

// Begin Class ANarrativePlayerState Function SetFactions
struct Z_Construct_UFunction_ANarrativePlayerState_SetFactions_Statics
{
	struct NarrativePlayerState_eventSetFactions_Parms
	{
		FGameplayTagContainer NewFactions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFactions_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewFactions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativePlayerState_SetFactions_Statics::NewProp_NewFactions = { "NewFactions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerState_eventSetFactions_Parms, NewFactions), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFactions_MetaData), NewProp_NewFactions_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerState_SetFactions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerState_SetFactions_Statics::NewProp_NewFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_SetFactions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerState_SetFactions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerState, nullptr, "SetFactions", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerState_SetFactions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_SetFactions_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerState_SetFactions_Statics::NarrativePlayerState_eventSetFactions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerState_SetFactions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerState_SetFactions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerState_SetFactions_Statics::NarrativePlayerState_eventSetFactions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerState_SetFactions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerState_SetFactions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerState::execSetFactions)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_NewFactions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFactions(Z_Param_Out_NewFactions);
	P_NATIVE_END;
}
// End Class ANarrativePlayerState Function SetFactions

// Begin Class ANarrativePlayerState
void ANarrativePlayerState::StaticRegisterNativesANarrativePlayerState()
{
	UClass* Class = ANarrativePlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHealth", &ANarrativePlayerState::execGetHealth },
		{ "GetInventoryComponent", &ANarrativePlayerState::execGetInventoryComponent },
		{ "GetSkillTreeComponent", &ANarrativePlayerState::execGetSkillTreeComponent },
		{ "IsAlive", &ANarrativePlayerState::execIsAlive },
		{ "OnRep_Faction", &ANarrativePlayerState::execOnRep_Faction },
		{ "SetFactions", &ANarrativePlayerState::execSetFactions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativePlayerState);
UClass* Z_Construct_UClass_ANarrativePlayerState_NoRegister()
{
	return ANarrativePlayerState::StaticClass();
}
struct Z_Construct_UClass_ANarrativePlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base player state for Narrative Pro core. \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealFramework/NarrativePlayerState.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Base player state for Narrative Pro core." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Factions_MetaData[] = {
		{ "Category", "Factions" },
		{ "Comment", "//Our affiliation \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerState.h" },
		{ "ToolTip", "Our affiliation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTreeComponent_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "Comment", "//The skill tree component - this holds our perks, skills, and skill tree points. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerState.h" },
		{ "ToolTip", "The skill tree component - this holds our perks, skills, and skill tree points." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Factions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSetBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillTreeComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativePlayerState_GetHealth, "GetHealth" }, // 3195696676
		{ &Z_Construct_UFunction_ANarrativePlayerState_GetInventoryComponent, "GetInventoryComponent" }, // 3709652485
		{ &Z_Construct_UFunction_ANarrativePlayerState_GetSkillTreeComponent, "GetSkillTreeComponent" }, // 1946422633
		{ &Z_Construct_UFunction_ANarrativePlayerState_IsAlive, "IsAlive" }, // 3781749273
		{ &Z_Construct_UFunction_ANarrativePlayerState_OnRep_Faction, "OnRep_Faction" }, // 243872356
		{ &Z_Construct_UFunction_ANarrativePlayerState_SetFactions, "SetFactions" }, // 1691300312
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativePlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativePlayerState_Statics::NewProp_Factions = { "Factions", "OnRep_Faction", (EPropertyFlags)0x0020080101010021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerState, Factions), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Factions_MetaData), NewProp_Factions_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerState, AbilitySystemComponent), Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerState_Statics::NewProp_AttributeSetBase = { "AttributeSetBase", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerState, AttributeSetBase), Z_Construct_UClass_UNarrativeAttributeSetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetBase_MetaData), NewProp_AttributeSetBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerState_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerState, InventoryComponent), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerState_Statics::NewProp_SkillTreeComponent = { "SkillTreeComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerState, SkillTreeComponent), Z_Construct_UClass_USkillTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTreeComponent_MetaData), NewProp_SkillTreeComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativePlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerState_Statics::NewProp_Factions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerState_Statics::NewProp_AttributeSetBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerState_Statics::NewProp_InventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerState_Statics::NewProp_SkillTreeComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativePlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANarrativePlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativePlayerState, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativePlayerState, INarrativeTeamAgentInterface), false },  // 1836146804
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativePlayerState_Statics::ClassParams = {
	&ANarrativePlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANarrativePlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativePlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativePlayerState()
{
	if (!Z_Registration_Info_UClass_ANarrativePlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativePlayerState.OuterSingleton, Z_Construct_UClass_ANarrativePlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativePlayerState.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativePlayerState>()
{
	return ANarrativePlayerState::StaticClass();
}
void ANarrativePlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Factions(TEXT("Factions"));
	const bool bIsValid = true
		&& Name_Factions == ClassReps[(int32)ENetFields_Private::Factions].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANarrativePlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativePlayerState);
ANarrativePlayerState::~ANarrativePlayerState() {}
// End Class ANarrativePlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativePlayerState, ANarrativePlayerState::StaticClass, TEXT("ANarrativePlayerState"), &Z_Registration_Info_UClass_ANarrativePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativePlayerState), 2886958083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerState_h_1040198531(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
