// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/NarrativePartyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativePartyComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativePartyComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativePartyComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTalesComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTalesComponent_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EPartyDialogueControlPolicy();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Enum EPartyDialogueControlPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPartyDialogueControlPolicy;
static UEnum* EPartyDialogueControlPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPartyDialogueControlPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPartyDialogueControlPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_EPartyDialogueControlPolicy, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("EPartyDialogueControlPolicy"));
	}
	return Z_Registration_Info_UEnum_EPartyDialogueControlPolicy.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EPartyDialogueControlPolicy>()
{
	return EPartyDialogueControlPolicy_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_EPartyDialogueControlPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllPlayers.Comment", "/**Anyone in the party can select dialogue options. Everyones camera will cut to whoever selected the line*/" },
		{ "AllPlayers.DisplayName", "All Party Members Controlled" },
		{ "AllPlayers.Name", "EPartyDialogueControlPolicy::AllPlayers" },
		{ "AllPlayers.ToolTip", "Anyone in the party can select dialogue options. Everyones camera will cut to whoever selected the line" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**Defines how a party goes about selecting replies*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativePartyComponent.h" },
		{ "PartyLeaderControlled.Comment", "/**Only the party leader can select dialogue options, the rest of the players will be essentially spectating the conversation*/" },
		{ "PartyLeaderControlled.DisplayName", "Party Leader Controlled" },
		{ "PartyLeaderControlled.Name", "EPartyDialogueControlPolicy::PartyLeaderControlled" },
		{ "PartyLeaderControlled.ToolTip", "Only the party leader can select dialogue options, the rest of the players will be essentially spectating the conversation" },
		{ "ToolTip", "Defines how a party goes about selecting replies" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPartyDialogueControlPolicy::PartyLeaderControlled", (int64)EPartyDialogueControlPolicy::PartyLeaderControlled },
		{ "EPartyDialogueControlPolicy::AllPlayers", (int64)EPartyDialogueControlPolicy::AllPlayers },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_EPartyDialogueControlPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"EPartyDialogueControlPolicy",
	"EPartyDialogueControlPolicy",
	Z_Construct_UEnum_NarrativeArsenal_EPartyDialogueControlPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EPartyDialogueControlPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EPartyDialogueControlPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_EPartyDialogueControlPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_EPartyDialogueControlPolicy()
{
	if (!Z_Registration_Info_UEnum_EPartyDialogueControlPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPartyDialogueControlPolicy.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_EPartyDialogueControlPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPartyDialogueControlPolicy.InnerSingleton;
}
// End Enum EPartyDialogueControlPolicy

// Begin Class UNarrativePartyComponent Function AddPartyMember
struct Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics
{
	struct NarrativePartyComponent_eventAddPartyMember_Parms
	{
		UTalesComponent* Member;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parties" },
		{ "Comment", "//[server] Add a member to the party.  Return true if successful.\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativePartyComponent.h" },
		{ "ToolTip", "[server] Add a member to the party.  Return true if successful." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Member_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Member;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePartyComponent_eventAddPartyMember_Parms, Member), Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Member_MetaData), NewProp_Member_MetaData) };
void Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativePartyComponent_eventAddPartyMember_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativePartyComponent_eventAddPartyMember_Parms), &Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_Member,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativePartyComponent, nullptr, "AddPartyMember", nullptr, nullptr, Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NarrativePartyComponent_eventAddPartyMember_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::NarrativePartyComponent_eventAddPartyMember_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativePartyComponent::execAddPartyMember)
{
	P_GET_OBJECT(UTalesComponent,Z_Param_Member);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddPartyMember(Z_Param_Member);
	P_NATIVE_END;
}
// End Class UNarrativePartyComponent Function AddPartyMember

// Begin Class UNarrativePartyComponent Function GetPartyLeader
struct Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics
{
	struct NarrativePartyComponent_eventGetPartyLeader_Parms
	{
		UTalesComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parties" },
		{ "Comment", "//Return the party leader (only works on server) \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativePartyComponent.h" },
		{ "ToolTip", "Return the party leader (only works on server)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePartyComponent_eventGetPartyLeader_Parms, ReturnValue), Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativePartyComponent, nullptr, "GetPartyLeader", nullptr, nullptr, Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::NarrativePartyComponent_eventGetPartyLeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::NarrativePartyComponent_eventGetPartyLeader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativePartyComponent::execGetPartyLeader)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTalesComponent**)Z_Param__Result=P_THIS->GetPartyLeader();
	P_NATIVE_END;
}
// End Class UNarrativePartyComponent Function GetPartyLeader

// Begin Class UNarrativePartyComponent Function GetPartyMembers
struct Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics
{
	struct NarrativePartyComponent_eventGetPartyMembers_Parms
	{
		TArray<UTalesComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parties" },
		{ "Comment", "//Return the members in the party \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativePartyComponent.h" },
		{ "ToolTip", "Return the members in the party" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePartyComponent_eventGetPartyMembers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativePartyComponent, nullptr, "GetPartyMembers", nullptr, nullptr, Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NarrativePartyComponent_eventGetPartyMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::NarrativePartyComponent_eventGetPartyMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativePartyComponent::execGetPartyMembers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UTalesComponent*>*)Z_Param__Result=P_THIS->GetPartyMembers();
	P_NATIVE_END;
}
// End Class UNarrativePartyComponent Function GetPartyMembers

// Begin Class UNarrativePartyComponent Function GetPartyMemberStates
struct Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics
{
	struct NarrativePartyComponent_eventGetPartyMemberStates_Parms
	{
		TArray<APlayerState*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parties" },
		{ "Comment", "//Return the members PlayerStates in the party \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativePartyComponent.h" },
		{ "ToolTip", "Return the members PlayerStates in the party" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePartyComponent_eventGetPartyMemberStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativePartyComponent, nullptr, "GetPartyMemberStates", nullptr, nullptr, Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::NarrativePartyComponent_eventGetPartyMemberStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::NarrativePartyComponent_eventGetPartyMemberStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativePartyComponent::execGetPartyMemberStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<APlayerState*>*)Z_Param__Result=P_THIS->GetPartyMemberStates();
	P_NATIVE_END;
}
// End Class UNarrativePartyComponent Function GetPartyMemberStates

// Begin Class UNarrativePartyComponent Function IsPartyLeader
struct Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics
{
	struct NarrativePartyComponent_eventIsPartyLeader_Parms
	{
		APlayerState* Member;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parties" },
		{ "Comment", "/**Return whether or not we're the leader of our party. Return true if we're not in a party as we're essentially the leader in that case*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativePartyComponent.h" },
		{ "ToolTip", "Return whether or not we're the leader of our party. Return true if we're not in a party as we're essentially the leader in that case" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Member;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePartyComponent_eventIsPartyLeader_Parms, Member), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativePartyComponent_eventIsPartyLeader_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativePartyComponent_eventIsPartyLeader_Parms), &Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NewProp_Member,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativePartyComponent, nullptr, "IsPartyLeader", nullptr, nullptr, Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NarrativePartyComponent_eventIsPartyLeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::NarrativePartyComponent_eventIsPartyLeader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativePartyComponent::execIsPartyLeader)
{
	P_GET_OBJECT(APlayerState,Z_Param_Member);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPartyLeader(Z_Param_Member);
	P_NATIVE_END;
}
// End Class UNarrativePartyComponent Function IsPartyLeader

// Begin Class UNarrativePartyComponent Function RemovePartyMember
struct Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics
{
	struct NarrativePartyComponent_eventRemovePartyMember_Parms
	{
		UTalesComponent* Member;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parties" },
		{ "Comment", "//[server] Remove a member from the party. Return true if successful, false if player wasn't in party etc\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativePartyComponent.h" },
		{ "ToolTip", "[server] Remove a member from the party. Return true if successful, false if player wasn't in party etc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Member_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Member;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePartyComponent_eventRemovePartyMember_Parms, Member), Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Member_MetaData), NewProp_Member_MetaData) };
void Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativePartyComponent_eventRemovePartyMember_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativePartyComponent_eventRemovePartyMember_Parms), &Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_Member,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativePartyComponent, nullptr, "RemovePartyMember", nullptr, nullptr, Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NarrativePartyComponent_eventRemovePartyMember_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::NarrativePartyComponent_eventRemovePartyMember_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativePartyComponent::execRemovePartyMember)
{
	P_GET_OBJECT(UTalesComponent,Z_Param_Member);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemovePartyMember(Z_Param_Member);
	P_NATIVE_END;
}
// End Class UNarrativePartyComponent Function RemovePartyMember

// Begin Class UNarrativePartyComponent
void UNarrativePartyComponent::StaticRegisterNativesUNarrativePartyComponent()
{
	UClass* Class = UNarrativePartyComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPartyMember", &UNarrativePartyComponent::execAddPartyMember },
		{ "GetPartyLeader", &UNarrativePartyComponent::execGetPartyLeader },
		{ "GetPartyMembers", &UNarrativePartyComponent::execGetPartyMembers },
		{ "GetPartyMemberStates", &UNarrativePartyComponent::execGetPartyMemberStates },
		{ "IsPartyLeader", &UNarrativePartyComponent::execIsPartyLeader },
		{ "RemovePartyMember", &UNarrativePartyComponent::execRemovePartyMember },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativePartyComponent);
UClass* Z_Construct_UClass_UNarrativePartyComponent_NoRegister()
{
	return UNarrativePartyComponent::StaticClass();
}
struct Z_Construct_UClass_UNarrativePartyComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**\n * A Narrative component intended to be shared by multiple clients. This allows for some very cool functionality, teammates\n * can play quests and dialogues together with each other. Use AddPartyMember and RemovePartyMember to setup your party. \n * \n * QUESTS: Quests began on the party component will be shown on all party members UI, and any player in the party can complete quest tasks.\n * \n * DIALOGUE: Dialogues began on the party component will begin for all players, and all players will see the dialogue in sync - if a player selects\n * a dialogue option all party members will see that player say the line - this behaviour can be modified in the components settings. \n * \n * You should put this component on an actor that replicates to all of your team members. The Game State is a great place for this,\n * however if your game requires multiple different parties you'll want to make a ASquad etc that derives AInfo to hold all your team members\n * and manage them, and put a party component there instead of the game state. \n */" },
		{ "DisplayName", "Narrative Party Component" },
		{ "IncludePath", "Tales/NarrativePartyComponent.h" },
		{ "ModuleRelativePath", "Public/Tales/NarrativePartyComponent.h" },
		{ "ToolTip", "A Narrative component intended to be shared by multiple clients. This allows for some very cool functionality, teammates\ncan play quests and dialogues together with each other. Use AddPartyMember and RemovePartyMember to setup your party.\n\nQUESTS: Quests began on the party component will be shown on all party members UI, and any player in the party can complete quest tasks.\n\nDIALOGUE: Dialogues began on the party component will begin for all players, and all players will see the dialogue in sync - if a player selects\na dialogue option all party members will see that player say the line - this behaviour can be modified in the components settings.\n\nYou should put this component on an actor that replicates to all of your team members. The Game State is a great place for this,\nhowever if your game requires multiple different parties you'll want to make a ASquad etc that derives AInfo to hold all your team members\nand manage them, and put a party component there instead of the game state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyDialogueControlPolicy_MetaData[] = {
		{ "Category", "Parties" },
		{ "Comment", "/**Defines how a party goes about selecting replies - currently just enforced by the UI, isn't actually authed by server */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativePartyComponent.h" },
		{ "ToolTip", "Defines how a party goes about selecting replies - currently just enforced by the UI, isn't actually authed by server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyMembers_MetaData[] = {
		{ "Category", "Parties" },
		{ "Comment", "/** All of the players in the party */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/NarrativePartyComponent.h" },
		{ "ToolTip", "All of the players in the party" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyMemberStates_MetaData[] = {
		{ "Category", "Parties" },
		{ "Comment", "/** Narrative Components exist on peoples player controllers, and so there isn't a nice way for people in the party to access\n\x09""each others pawns/playerstates via PartyMembers array, and so this array exists to solve that. We store PStates because pawns can change\n\x09possession but PState->GetPawn() will always give us the current valid pawn */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativePartyComponent.h" },
		{ "ToolTip", "Narrative Components exist on peoples player controllers, and so there isn't a nice way for people in the party to access\n      each others pawns/playerstates via PartyMembers array, and so this array exists to solve that. We store PStates because pawns can change\n      possession but PState->GetPawn() will always give us the current valid pawn" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PartyDialogueControlPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PartyDialogueControlPolicy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartyMembers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PartyMembers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartyMemberStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PartyMemberStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativePartyComponent_AddPartyMember, "AddPartyMember" }, // 3690964483
		{ &Z_Construct_UFunction_UNarrativePartyComponent_GetPartyLeader, "GetPartyLeader" }, // 2800217562
		{ &Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMembers, "GetPartyMembers" }, // 376648044
		{ &Z_Construct_UFunction_UNarrativePartyComponent_GetPartyMemberStates, "GetPartyMemberStates" }, // 3472915792
		{ &Z_Construct_UFunction_UNarrativePartyComponent_IsPartyLeader, "IsPartyLeader" }, // 2998107846
		{ &Z_Construct_UFunction_UNarrativePartyComponent_RemovePartyMember, "RemovePartyMember" }, // 1006734404
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativePartyComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyDialogueControlPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyDialogueControlPolicy = { "PartyDialogueControlPolicy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativePartyComponent, PartyDialogueControlPolicy), Z_Construct_UEnum_NarrativeArsenal_EPartyDialogueControlPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyDialogueControlPolicy_MetaData), NewProp_PartyDialogueControlPolicy_MetaData) }; // 2613721260
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMembers_Inner = { "PartyMembers", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMembers = { "PartyMembers", nullptr, (EPropertyFlags)0x002008800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativePartyComponent, PartyMembers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyMembers_MetaData), NewProp_PartyMembers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMemberStates_Inner = { "PartyMemberStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMemberStates = { "PartyMemberStates", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativePartyComponent, PartyMemberStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyMemberStates_MetaData), NewProp_PartyMemberStates_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativePartyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyDialogueControlPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyDialogueControlPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMembers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMemberStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativePartyComponent_Statics::NewProp_PartyMemberStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePartyComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativePartyComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTalesComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePartyComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativePartyComponent_Statics::ClassParams = {
	&UNarrativePartyComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativePartyComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePartyComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePartyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativePartyComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativePartyComponent()
{
	if (!Z_Registration_Info_UClass_UNarrativePartyComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativePartyComponent.OuterSingleton, Z_Construct_UClass_UNarrativePartyComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativePartyComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativePartyComponent>()
{
	return UNarrativePartyComponent::StaticClass();
}
void UNarrativePartyComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PartyMemberStates(TEXT("PartyMemberStates"));
	const bool bIsValid = true
		&& Name_PartyMemberStates == ClassReps[(int32)ENetFields_Private::PartyMemberStates].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNarrativePartyComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativePartyComponent);
UNarrativePartyComponent::~UNarrativePartyComponent() {}
// End Class UNarrativePartyComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPartyDialogueControlPolicy_StaticEnum, TEXT("EPartyDialogueControlPolicy"), &Z_Registration_Info_UEnum_EPartyDialogueControlPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2613721260U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativePartyComponent, UNarrativePartyComponent::StaticClass, TEXT("UNarrativePartyComponent"), &Z_Registration_Info_UClass_UNarrativePartyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativePartyComponent), 1805068570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h_1129214326(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
