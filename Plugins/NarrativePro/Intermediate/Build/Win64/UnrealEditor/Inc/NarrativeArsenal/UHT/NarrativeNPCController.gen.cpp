// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/NarrativeNPCController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeNPCController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCController();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCInteractionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class ANarrativeNPCController Function CleanUp
struct NarrativeNPCController_eventCleanUp_Parms
{
	float RemovePawnDelay;
};
static const FName NAME_ANarrativeNPCController_CleanUp = FName(TEXT("CleanUp"));
void ANarrativeNPCController::CleanUp(const float RemovePawnDelay)
{
	NarrativeNPCController_eventCleanUp_Parms Parms;
	Parms.RemovePawnDelay=RemovePawnDelay;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeNPCController_CleanUp);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANarrativeNPCController_CleanUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NarrativeNPCController" },
		{ "Comment", "//Tells the AI controller it needs to destroy itself and its pawn. \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
		{ "ToolTip", "Tells the AI controller it needs to destroy itself and its pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovePawnDelay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemovePawnDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeNPCController_CleanUp_Statics::NewProp_RemovePawnDelay = { "RemovePawnDelay", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCController_eventCleanUp_Parms, RemovePawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovePawnDelay_MetaData), NewProp_RemovePawnDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCController_CleanUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCController_CleanUp_Statics::NewProp_RemovePawnDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_CleanUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCController_CleanUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCController, nullptr, "CleanUp", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCController_CleanUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_CleanUp_Statics::PropPointers), sizeof(NarrativeNPCController_eventCleanUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_CleanUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCController_CleanUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeNPCController_eventCleanUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCController_CleanUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCController_CleanUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativeNPCController Function CleanUp

// Begin Class ANarrativeNPCController Function GetActivityComponent
struct Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent_Statics
{
	struct NarrativeNPCController_eventGetActivityComponent_Parms
	{
		UNPCActivityComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCController_eventGetActivityComponent_Parms, ReturnValue), Z_Construct_UClass_UNPCActivityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCController, nullptr, "GetActivityComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent_Statics::NarrativeNPCController_eventGetActivityComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent_Statics::NarrativeNPCController_eventGetActivityComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCController::execGetActivityComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNPCActivityComponent**)Z_Param__Result=P_THIS->GetActivityComponent();
	P_NATIVE_END;
}
// End Class ANarrativeNPCController Function GetActivityComponent

// Begin Class ANarrativeNPCController Function GetControlledNPC
struct Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC_Statics
{
	struct NarrativeNPCController_eventGetControlledNPC_Parms
	{
		ANarrativeNPCCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NarrativeNPCController" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCController_eventGetControlledNPC_Parms, ReturnValue), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCController, nullptr, "GetControlledNPC", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC_Statics::NarrativeNPCController_eventGetControlledNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC_Statics::NarrativeNPCController_eventGetControlledNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCController::execGetControlledNPC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeNPCCharacter**)Z_Param__Result=P_THIS->GetControlledNPC();
	P_NATIVE_END;
}
// End Class ANarrativeNPCController Function GetControlledNPC

// Begin Class ANarrativeNPCController Function GetCurrentTree
struct Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree_Statics
{
	struct NarrativeNPCController_eventGetCurrentTree_Parms
	{
		UBehaviorTree* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NarrativeNPCController" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCController_eventGetCurrentTree_Parms, ReturnValue), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCController, nullptr, "GetCurrentTree", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree_Statics::NarrativeNPCController_eventGetCurrentTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree_Statics::NarrativeNPCController_eventGetCurrentTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCController::execGetCurrentTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBehaviorTree**)Z_Param__Result=P_THIS->GetCurrentTree();
	P_NATIVE_END;
}
// End Class ANarrativeNPCController Function GetCurrentTree

// Begin Class ANarrativeNPCController Function GetInteractionComponent
struct Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent_Statics
{
	struct NarrativeNPCController_eventGetInteractionComponent_Parms
	{
		UNPCInteractionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCController_eventGetInteractionComponent_Parms, ReturnValue), Z_Construct_UClass_UNPCInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCController, nullptr, "GetInteractionComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent_Statics::NarrativeNPCController_eventGetInteractionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent_Statics::NarrativeNPCController_eventGetInteractionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCController::execGetInteractionComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNPCInteractionComponent**)Z_Param__Result=P_THIS->GetInteractionComponent();
	P_NATIVE_END;
}
// End Class ANarrativeNPCController Function GetInteractionComponent

// Begin Class ANarrativeNPCController Function GetNPCData
struct Z_Construct_UFunction_ANarrativeNPCController_GetNPCData_Statics
{
	struct NarrativeNPCController_eventGetNPCData_Parms
	{
		UNPCDefinition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NarrativeNPCController" },
		{ "Comment", "//Grab the NPCs data asset \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
		{ "ToolTip", "Grab the NPCs data asset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCController_GetNPCData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCController_eventGetNPCData_Parms, ReturnValue), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCController_GetNPCData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCController_GetNPCData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetNPCData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCController_GetNPCData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCController, nullptr, "GetNPCData", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCController_GetNPCData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetNPCData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCController_GetNPCData_Statics::NarrativeNPCController_eventGetNPCData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetNPCData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCController_GetNPCData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCController_GetNPCData_Statics::NarrativeNPCController_eventGetNPCData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCController_GetNPCData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCController_GetNPCData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCController::execGetNPCData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNPCDefinition**)Z_Param__Result=P_THIS->GetNPCData();
	P_NATIVE_END;
}
// End Class ANarrativeNPCController Function GetNPCData

// Begin Class ANarrativeNPCController Function GetNPCName
struct Z_Construct_UFunction_ANarrativeNPCController_GetNPCName_Statics
{
	struct NarrativeNPCController_eventGetNPCName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NarrativeNPCController" },
		{ "Comment", "//Grab the NPCs name\n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
		{ "ToolTip", "Grab the NPCs name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ANarrativeNPCController_GetNPCName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCController_eventGetNPCName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCController_GetNPCName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCController_GetNPCName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetNPCName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCController_GetNPCName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCController, nullptr, "GetNPCName", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCController_GetNPCName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetNPCName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCController_GetNPCName_Statics::NarrativeNPCController_eventGetNPCName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_GetNPCName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCController_GetNPCName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCController_GetNPCName_Statics::NarrativeNPCController_eventGetNPCName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCController_GetNPCName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCController_GetNPCName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCController::execGetNPCName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetNPCName();
	P_NATIVE_END;
}
// End Class ANarrativeNPCController Function GetNPCName

// Begin Class ANarrativeNPCController Function HandleDeath
struct NarrativeNPCController_eventHandleDeath_Parms
{
	AActor* KilledActor;
	UNarrativeAbilitySystemComponent* KilledActorASC;
};
static const FName NAME_ANarrativeNPCController_HandleDeath = FName(TEXT("HandleDeath"));
void ANarrativeNPCController::HandleDeath(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeNPCController_HandleDeath);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeNPCController_eventHandleDeath_Parms Parms;
		Parms.KilledActor=KilledActor;
		Parms.KilledActorASC=KilledActorASC;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleDeath_Implementation(KilledActor, KilledActorASC);
	}
}
struct Z_Construct_UFunction_ANarrativeNPCController_HandleDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Gives our NPC controller a chance to react to death.\n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
		{ "ToolTip", "Gives our NPC controller a chance to react to death." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KilledActorASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledActorASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCController_HandleDeath_Statics::NewProp_KilledActor = { "KilledActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCController_eventHandleDeath_Parms, KilledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCController_HandleDeath_Statics::NewProp_KilledActorASC = { "KilledActorASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCController_eventHandleDeath_Parms, KilledActorASC), Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KilledActorASC_MetaData), NewProp_KilledActorASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCController_HandleDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCController_HandleDeath_Statics::NewProp_KilledActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCController_HandleDeath_Statics::NewProp_KilledActorASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_HandleDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCController_HandleDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCController, nullptr, "HandleDeath", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCController_HandleDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_HandleDeath_Statics::PropPointers), sizeof(NarrativeNPCController_eventHandleDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_HandleDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCController_HandleDeath_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeNPCController_eventHandleDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCController_HandleDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCController_HandleDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCController::execHandleDeath)
{
	P_GET_OBJECT(AActor,Z_Param_KilledActor);
	P_GET_OBJECT(UNarrativeAbilitySystemComponent,Z_Param_KilledActorASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDeath_Implementation(Z_Param_KilledActor,Z_Param_KilledActorASC);
	P_NATIVE_END;
}
// End Class ANarrativeNPCController Function HandleDeath

// Begin Class ANarrativeNPCController Function IsAlive
struct Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics
{
	struct NarrativeNPCController_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NarrativeNPCController" },
		{ "Comment", "//Check whether our controlled NPC is alive\n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
		{ "ToolTip", "Check whether our controlled NPC is alive" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNPCController_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNPCController_eventIsAlive_Parms), &Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCController, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics::NarrativeNPCController_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics::NarrativeNPCController_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCController_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCController_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCController::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class ANarrativeNPCController Function IsAlive

// Begin Class ANarrativeNPCController Function RequestAttackToken
struct Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics
{
	struct NarrativeNPCController_eventRequestAttackToken_Parms
	{
		UNarrativeAbilitySystemComponent* TargetToAttack;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attack Tokens" },
		{ "Comment", "//Request an attack token from the target ASC. Return true if we successfully claimed the token and can attack. \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
		{ "ToolTip", "Request an attack token from the target ASC. Return true if we successfully claimed the token and can attack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetToAttack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetToAttack;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::NewProp_TargetToAttack = { "TargetToAttack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCController_eventRequestAttackToken_Parms, TargetToAttack), Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetToAttack_MetaData), NewProp_TargetToAttack_MetaData) };
void Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNPCController_eventRequestAttackToken_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNPCController_eventRequestAttackToken_Parms), &Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::NewProp_TargetToAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCController, nullptr, "RequestAttackToken", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::NarrativeNPCController_eventRequestAttackToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::NarrativeNPCController_eventRequestAttackToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCController::execRequestAttackToken)
{
	P_GET_OBJECT(UNarrativeAbilitySystemComponent,Z_Param_TargetToAttack);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestAttackToken(Z_Param_TargetToAttack);
	P_NATIVE_END;
}
// End Class ANarrativeNPCController Function RequestAttackToken

// Begin Class ANarrativeNPCController Function ReturnToken
struct Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics
{
	struct NarrativeNPCController_eventReturnToken_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attack Tokens" },
		{ "Comment", "//Give our token back to the current ASC - called automatically by RequestAttackToken if we already have one. \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
		{ "ToolTip", "Give our token back to the current ASC - called automatically by RequestAttackToken if we already have one." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNPCController_eventReturnToken_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNPCController_eventReturnToken_Parms), &Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCController, nullptr, "ReturnToken", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics::NarrativeNPCController_eventReturnToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics::NarrativeNPCController_eventReturnToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCController_ReturnToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCController_ReturnToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCController::execReturnToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReturnToken();
	P_NATIVE_END;
}
// End Class ANarrativeNPCController Function ReturnToken

// Begin Class ANarrativeNPCController
void ANarrativeNPCController::StaticRegisterNativesANarrativeNPCController()
{
	UClass* Class = ANarrativeNPCController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActivityComponent", &ANarrativeNPCController::execGetActivityComponent },
		{ "GetControlledNPC", &ANarrativeNPCController::execGetControlledNPC },
		{ "GetCurrentTree", &ANarrativeNPCController::execGetCurrentTree },
		{ "GetInteractionComponent", &ANarrativeNPCController::execGetInteractionComponent },
		{ "GetNPCData", &ANarrativeNPCController::execGetNPCData },
		{ "GetNPCName", &ANarrativeNPCController::execGetNPCName },
		{ "HandleDeath", &ANarrativeNPCController::execHandleDeath },
		{ "IsAlive", &ANarrativeNPCController::execIsAlive },
		{ "RequestAttackToken", &ANarrativeNPCController::execRequestAttackToken },
		{ "ReturnToken", &ANarrativeNPCController::execReturnToken },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativeNPCController);
UClass* Z_Construct_UClass_ANarrativeNPCController_NoRegister()
{
	return ANarrativeNPCController::StaticClass();
}
struct Z_Construct_UClass_ANarrativeNPCController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * NPC Controller for NPCs spawned by the Narrative NPC subsystem. \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/NarrativeNPCController.h" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "NPC Controller for NPCs spawned by the Narrative NPC subsystem." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCActivityComponent_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "Comment", "/**The NPC activity component, stores the behaviour tree and current state and can write that to disk.*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
		{ "ToolTip", "The NPC activity component, stores the behaviour tree and current state and can write that to disk." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[] = {
		{ "Category", "Narrative|Interaction" },
		{ "Comment", "//NPCs interaction component \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
		{ "ToolTip", "NPCs interaction component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedToken_MetaData[] = {
		{ "Category", "Attack Tokens" },
		{ "Comment", "//The current attack token we've claimed \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCController.h" },
		{ "ToolTip", "The current attack token we've claimed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCActivityComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrantedToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativeNPCController_CleanUp, "CleanUp" }, // 3844948430
		{ &Z_Construct_UFunction_ANarrativeNPCController_GetActivityComponent, "GetActivityComponent" }, // 2935231910
		{ &Z_Construct_UFunction_ANarrativeNPCController_GetControlledNPC, "GetControlledNPC" }, // 2753447907
		{ &Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree, "GetCurrentTree" }, // 449105167
		{ &Z_Construct_UFunction_ANarrativeNPCController_GetInteractionComponent, "GetInteractionComponent" }, // 4103467915
		{ &Z_Construct_UFunction_ANarrativeNPCController_GetNPCData, "GetNPCData" }, // 447716976
		{ &Z_Construct_UFunction_ANarrativeNPCController_GetNPCName, "GetNPCName" }, // 1664341185
		{ &Z_Construct_UFunction_ANarrativeNPCController_HandleDeath, "HandleDeath" }, // 1560905347
		{ &Z_Construct_UFunction_ANarrativeNPCController_IsAlive, "IsAlive" }, // 3813356648
		{ &Z_Construct_UFunction_ANarrativeNPCController_RequestAttackToken, "RequestAttackToken" }, // 1710403596
		{ &Z_Construct_UFunction_ANarrativeNPCController_ReturnToken, "ReturnToken" }, // 218724878
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeNPCController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeNPCController_Statics::NewProp_NPCActivityComponent = { "NPCActivityComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCController, NPCActivityComponent), Z_Construct_UClass_UNPCActivityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCActivityComponent_MetaData), NewProp_NPCActivityComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeNPCController_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCController, InteractionComponent), Z_Construct_UClass_UNPCInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComponent_MetaData), NewProp_InteractionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeNPCController_Statics::NewProp_GrantedToken = { "GrantedToken", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCController, GrantedToken), Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedToken_MetaData), NewProp_GrantedToken_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativeNPCController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCController_Statics::NewProp_NPCActivityComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCController_Statics::NewProp_InteractionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCController_Statics::NewProp_GrantedToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeNPCController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativeNPCController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeNPCController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANarrativeNPCController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativeNPCController, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativeNPCController, IGameplayTagAssetInterface), false },  // 2592985258
	{ Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativeNPCController, INarrativeTeamAgentInterface), false },  // 1836146804
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativeNPCController_Statics::ClassParams = {
	&ANarrativeNPCController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANarrativeNPCController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeNPCController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeNPCController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativeNPCController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativeNPCController()
{
	if (!Z_Registration_Info_UClass_ANarrativeNPCController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativeNPCController.OuterSingleton, Z_Construct_UClass_ANarrativeNPCController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativeNPCController.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativeNPCController>()
{
	return ANarrativeNPCController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativeNPCController);
ANarrativeNPCController::~ANarrativeNPCController() {}
// End Class ANarrativeNPCController

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativeNPCController, ANarrativeNPCController::StaticClass, TEXT("ANarrativeNPCController"), &Z_Registration_Info_UClass_ANarrativeNPCController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeNPCController), 40141399U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_3857070046(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
