// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/NarrativeCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCondition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCondition();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCondition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTalesComponent_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EPartyConditionPolicy();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Enum EPartyConditionPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPartyConditionPolicy;
static UEnum* EPartyConditionPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPartyConditionPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPartyConditionPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_EPartyConditionPolicy, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("EPartyConditionPolicy"));
	}
	return Z_Registration_Info_UEnum_EPartyConditionPolicy.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EPartyConditionPolicy>()
{
	return EPartyConditionPolicy_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_EPartyConditionPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllPlayersPass.Comment", "/**The condition is run on all of your party members - everyone needs to pass for the condition to pass. */" },
		{ "AllPlayersPass.DisplayName", "All Party Members Pass" },
		{ "AllPlayersPass.Name", "EPartyConditionPolicy::AllPlayersPass" },
		{ "AllPlayersPass.ToolTip", "The condition is run on all of your party members - everyone needs to pass for the condition to pass." },
		{ "AnyPlayerPasses.Comment", "/**The condition is run on all of your party members - if anyone in the party passes the condition, it passes. */" },
		{ "AnyPlayerPasses.DisplayName", "Any Party Member Passes" },
		{ "AnyPlayerPasses.Name", "EPartyConditionPolicy::AnyPlayerPasses" },
		{ "AnyPlayerPasses.ToolTip", "The condition is run on all of your party members - if anyone in the party passes the condition, it passes." },
		{ "Comment", "//How do we handle running this condition on a party dialogue?\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeCondition.h" },
		{ "PartyLeaderPasses.Comment", "/**The condition is run on the party leader - if they pass the condition, the condition passes. */" },
		{ "PartyLeaderPasses.DisplayName", "Party Leader Passes" },
		{ "PartyLeaderPasses.Name", "EPartyConditionPolicy::PartyLeaderPasses" },
		{ "PartyLeaderPasses.ToolTip", "The condition is run on the party leader - if they pass the condition, the condition passes." },
		{ "PartyPasses.Comment", "/**The condition is run on your party itself - your parties narrative component. If it passes, the condition passes. */" },
		{ "PartyPasses.DisplayName", "Party Passes" },
		{ "PartyPasses.Name", "EPartyConditionPolicy::PartyPasses" },
		{ "PartyPasses.ToolTip", "The condition is run on your party itself - your parties narrative component. If it passes, the condition passes." },
		{ "ToolTip", "How do we handle running this condition on a party dialogue?" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPartyConditionPolicy::AnyPlayerPasses", (int64)EPartyConditionPolicy::AnyPlayerPasses },
		{ "EPartyConditionPolicy::PartyPasses", (int64)EPartyConditionPolicy::PartyPasses },
		{ "EPartyConditionPolicy::AllPlayersPass", (int64)EPartyConditionPolicy::AllPlayersPass },
		{ "EPartyConditionPolicy::PartyLeaderPasses", (int64)EPartyConditionPolicy::PartyLeaderPasses },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_EPartyConditionPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"EPartyConditionPolicy",
	"EPartyConditionPolicy",
	Z_Construct_UEnum_NarrativeArsenal_EPartyConditionPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EPartyConditionPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EPartyConditionPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_EPartyConditionPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_EPartyConditionPolicy()
{
	if (!Z_Registration_Info_UEnum_EPartyConditionPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPartyConditionPolicy.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_EPartyConditionPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPartyConditionPolicy.InnerSingleton;
}
// End Enum EPartyConditionPolicy

// Begin Class UNarrativeCondition Function CheckCondition
struct NarrativeCondition_eventCheckCondition_Parms
{
	APawn* Pawn;
	APlayerController* Controller;
	UTalesComponent* NarrativeComponent;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeCondition_eventCheckCondition_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNarrativeCondition_CheckCondition = FName(TEXT("CheckCondition"));
bool UNarrativeCondition::CheckCondition(APawn* Pawn, APlayerController* Controller, UTalesComponent* NarrativeComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeCondition_CheckCondition);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCondition_eventCheckCondition_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.Controller=Controller;
		Parms.NarrativeComponent=NarrativeComponent;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return CheckCondition_Implementation(Pawn, Controller, NarrativeComponent);
	}
}
struct Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Conditions" },
		{ "Comment", "/** Check whether this condition is true or false\n\x09\n\x09@param Pawn The pawn of the player we're running the condition on - will be null if running the condition against a party\n\x09@param Controller The controller of the player we're running the condition on - will be null if running the condition against a party\n\x09@param NarrativeComponent The narrative component we're running the condition on \n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeCondition.h" },
		{ "ToolTip", "Check whether this condition is true or false\n\n      @param Pawn The pawn of the player we're running the condition on - will be null if running the condition against a party\n      @param Controller The controller of the player we're running the condition on - will be null if running the condition against a party\n      @param NarrativeComponent The narrative component we're running the condition on" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCondition_eventCheckCondition_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCondition_eventCheckCondition_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_NarrativeComponent = { "NarrativeComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCondition_eventCheckCondition_Parms, NarrativeComponent), Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NarrativeComponent_MetaData), NewProp_NarrativeComponent_MetaData) };
void Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCondition_eventCheckCondition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCondition_eventCheckCondition_Parms), &Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_NarrativeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCondition, nullptr, "CheckCondition", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::PropPointers), sizeof(NarrativeCondition_eventCheckCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCondition_eventCheckCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCondition_CheckCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCondition_CheckCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCondition::execCheckCondition)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_GET_OBJECT(APlayerController,Z_Param_Controller);
	P_GET_OBJECT(UTalesComponent,Z_Param_NarrativeComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckCondition_Implementation(Z_Param_Pawn,Z_Param_Controller,Z_Param_NarrativeComponent);
	P_NATIVE_END;
}
// End Class UNarrativeCondition Function CheckCondition

// Begin Class UNarrativeCondition Function GetGraphDisplayText
struct NarrativeCondition_eventGetGraphDisplayText_Parms
{
	FString ReturnValue;
};
static const FName NAME_UNarrativeCondition_GetGraphDisplayText = FName(TEXT("GetGraphDisplayText"));
FString UNarrativeCondition::GetGraphDisplayText()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeCondition_GetGraphDisplayText);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCondition_eventGetGraphDisplayText_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetGraphDisplayText_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Conditions" },
		{ "Comment", "/**Define the text that will show up on a node if this condition is added to it */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeCondition.h" },
		{ "ToolTip", "Define the text that will show up on a node if this condition is added to it" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCondition_eventGetGraphDisplayText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCondition, nullptr, "GetGraphDisplayText", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::PropPointers), sizeof(NarrativeCondition_eventGetGraphDisplayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCondition_eventGetGraphDisplayText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCondition::execGetGraphDisplayText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetGraphDisplayText_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeCondition Function GetGraphDisplayText

// Begin Class UNarrativeCondition
void UNarrativeCondition::StaticRegisterNativesUNarrativeCondition()
{
	UClass* Class = UNarrativeCondition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckCondition", &UNarrativeCondition::execCheckCondition },
		{ "GetGraphDisplayText", &UNarrativeCondition::execGetGraphDisplayText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCondition);
UClass* Z_Construct_UClass_UNarrativeCondition_NoRegister()
{
	return UNarrativeCondition::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Narrative Conditions allow you to make conditions that dialogues and quests can then use to conditionally include/exclude nodes.\n * \n * For example, you could make a condition \"HasItem\" that checks if the player has a certain amount of an item. Then, you could use that\n * condition on a dialogue node so that the player can only say \"I'll buy it!\" if they actually have 500 coins in their inventory. \n * \n * Currently quests do not support NarrativeConditions, only NarrativeEvents. Dialogues support both. \n */" },
		{ "IncludePath", "Tales/NarrativeCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeCondition.h" },
		{ "ToolTip", "Narrative Conditions allow you to make conditions that dialogues and quests can then use to conditionally include/exclude nodes.\n\nFor example, you could make a condition \"HasItem\" that checks if the player has a certain amount of an item. Then, you could use that\ncondition on a dialogue node so that the player can only say \"I'll buy it!\" if they actually have 500 coins in their inventory.\n\nCurrently quests do not support NarrativeConditions, only NarrativeEvents. Dialogues support both." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNot_MetaData[] = {
		{ "Category", "Conditions" },
		{ "Comment", "//Set this to true to flip the result of this condition\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeCondition.h" },
		{ "ToolTip", "Set this to true to flip the result of this condition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterTargets_MetaData[] = {
		{ "Category", "Conditions" },
		{ "Comment", "/**Special narrative pro feature - if this is empty, we'll run the condition on the owning player, but if this is contains any targets\n\x09we'll run the condition for each character in character targets, using the character as OwningPawn, and all need to pass for the condition to pass.*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeCondition.h" },
		{ "ToolTip", "Special narrative pro feature - if this is empty, we'll run the condition on the owning player, but if this is contains any targets\n       we'll run the condition for each character in character targets, using the character as OwningPawn, and all need to pass for the condition to pass." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyConditionPolicy_MetaData[] = {
		{ "Category", "Parties" },
		{ "Comment", "/**\n\x09""Defines how the condition should be ran against a party that is doing this dialogue. Ignored by non-party dialogues. \n\n\x09Imagine if you want to check if your party has completed a quest. By default narrative will check if anyone in the party had completed \n\x09the quest on their own narrative component, but if you wanted to check if the party itself had completed the quest before you'd check this box.*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeCondition.h" },
		{ "ToolTip", "Defines how the condition should be ran against a party that is doing this dialogue. Ignored by non-party dialogues.\n\nImagine if you want to check if your party has completed a quest. By default narrative will check if anyone in the party had completed\nthe quest on their own narrative component, but if you wanted to check if the party itself had completed the quest before you'd check this box." },
	};
#endif // WITH_METADATA
	static void NewProp_bNot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterTargets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartyConditionPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PartyConditionPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCondition_CheckCondition, "CheckCondition" }, // 518890398
		{ &Z_Construct_UFunction_UNarrativeCondition_GetGraphDisplayText, "GetGraphDisplayText" }, // 3894139230
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot_SetBit(void* Obj)
{
	((UNarrativeCondition*)Obj)->bNot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot = { "bNot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeCondition), &Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNot_MetaData), NewProp_bNot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_CharacterTargets_Inner = { "CharacterTargets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCharacterDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_CharacterTargets = { "CharacterTargets", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCondition, CharacterTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterTargets_MetaData), NewProp_CharacterTargets_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_PartyConditionPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_PartyConditionPolicy = { "PartyConditionPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCondition, PartyConditionPolicy), Z_Construct_UEnum_NarrativeArsenal_EPartyConditionPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyConditionPolicy_MetaData), NewProp_PartyConditionPolicy_MetaData) }; // 3025712406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_bNot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_CharacterTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_CharacterTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_PartyConditionPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCondition_Statics::NewProp_PartyConditionPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCondition_Statics::ClassParams = {
	&UNarrativeCondition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeCondition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCondition()
{
	if (!Z_Registration_Info_UClass_UNarrativeCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCondition.OuterSingleton, Z_Construct_UClass_UNarrativeCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCondition.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeCondition>()
{
	return UNarrativeCondition::StaticClass();
}
UNarrativeCondition::UNarrativeCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCondition);
UNarrativeCondition::~UNarrativeCondition() {}
// End Class UNarrativeCondition

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeCondition_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPartyConditionPolicy_StaticEnum, TEXT("EPartyConditionPolicy"), &Z_Registration_Info_UEnum_EPartyConditionPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3025712406U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCondition, UNarrativeCondition::StaticClass, TEXT("UNarrativeCondition"), &Z_Registration_Info_UClass_UNarrativeCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCondition), 1242675274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeCondition_h_890620095(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeCondition_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeCondition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeCondition_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
