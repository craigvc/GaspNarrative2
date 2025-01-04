// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/NinjaFactionFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionFunctionLibrary() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionComponent_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionFunctionLibrary();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class UNinjaFactionFunctionLibrary Function GetAttitude
struct Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics
{
	struct NinjaFactionFunctionLibrary_eventGetAttitude_Parms
	{
		const AActor* Source;
		const AActor* Target;
		TEnumAsByte<ETeamAttitude::Type> Attitude;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions" },
		{ "Comment", "/**\n\x09 * Determines the attitude between two actors.\n\x09 * \n\x09 * @param Source    Source actor from which the faction test is done. Must be a valid faction member.\n\x09 * @param Target    Target actor to which the faction test is done against. Must be a valid faction member.\n\x09 * @param Attitude\x09Output parameter receiving the resolved attitude.\n\x09 * @return          True if the attitude was resolved. False otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaFactionFunctionLibrary.h" },
		{ "ReturnDisplayName", "Attitude Solved?" },
		{ "ToolTip", "Determines the attitude between two actors.\n\n@param Source    Source actor from which the faction test is done. Must be a valid faction member.\n@param Target    Target actor to which the faction test is done against. Must be a valid faction member.\n@param Attitude      Output parameter receiving the resolved attitude.\n@return          True if the attitude was resolved. False otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Attitude;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionFunctionLibrary_eventGetAttitude_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionFunctionLibrary_eventGetAttitude_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::NewProp_Attitude = { "Attitude", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionFunctionLibrary_eventGetAttitude_Parms, Attitude), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(0, nullptr) }; // 2991328252
void Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaFactionFunctionLibrary_eventGetAttitude_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionFunctionLibrary_eventGetAttitude_Parms), &Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::NewProp_Attitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionFunctionLibrary, nullptr, "GetAttitude", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::NinjaFactionFunctionLibrary_eventGetAttitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::NinjaFactionFunctionLibrary_eventGetAttitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionFunctionLibrary::execGetAttitude)
{
	P_GET_OBJECT(AActor,Z_Param_Source);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Attitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaFactionFunctionLibrary::GetAttitude(Z_Param_Source,Z_Param_Target,(TEnumAsByte<ETeamAttitude::Type>&)(Z_Param_Out_Attitude));
	P_NATIVE_END;
}
// End Class UNinjaFactionFunctionLibrary Function GetAttitude

// Begin Class UNinjaFactionFunctionLibrary Function GetFactionComponent
struct Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics
{
	struct NinjaFactionFunctionLibrary_eventGetFactionComponent_Parms
	{
		const AActor* Member;
		UNinjaFactionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions" },
		{ "Comment", "/**\n     * Retrieves the Faction Component \n     * \n     * @param Member    Actor implementing the Faction Member interface.\n     * @return          The component assigned to the actor. May be null.\n     */" },
		{ "ModuleRelativePath", "Public/NinjaFactionFunctionLibrary.h" },
		{ "ReturnDisplayName", "Faction Component" },
		{ "ToolTip", "Retrieves the Faction Component\n\n@param Member    Actor implementing the Faction Member interface.\n@return          The component assigned to the actor. May be null." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Member_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Member;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionFunctionLibrary_eventGetFactionComponent_Parms, Member), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Member_MetaData), NewProp_Member_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionFunctionLibrary_eventGetFactionComponent_Parms, ReturnValue), Z_Construct_UClass_UNinjaFactionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics::NewProp_Member,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionFunctionLibrary, nullptr, "GetFactionComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics::NinjaFactionFunctionLibrary_eventGetFactionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics::NinjaFactionFunctionLibrary_eventGetFactionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionFunctionLibrary::execGetFactionComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Member);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaFactionComponent**)Z_Param__Result=UNinjaFactionFunctionLibrary::GetFactionComponent(Z_Param_Member);
	P_NATIVE_END;
}
// End Class UNinjaFactionFunctionLibrary Function GetFactionComponent

// Begin Class UNinjaFactionFunctionLibrary Function GetMainFaction
struct Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics
{
	struct NinjaFactionFunctionLibrary_eventGetMainFaction_Parms
	{
		const AActor* Member;
		UNinjaFactionDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions" },
		{ "Comment", "/**\n     * Provides the Main Faction assigned to a member.\n     *\n     * @param Member    Actor implementing the Faction Member interface.\n     * @return          The Main Faction assigned to the actor. May be null.\n     */" },
		{ "ModuleRelativePath", "Public/NinjaFactionFunctionLibrary.h" },
		{ "ReturnDisplayName", "Faction Data" },
		{ "ToolTip", "Provides the Main Faction assigned to a member.\n\n@param Member    Actor implementing the Faction Member interface.\n@return          The Main Faction assigned to the actor. May be null." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Member_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Member;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionFunctionLibrary_eventGetMainFaction_Parms, Member), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Member_MetaData), NewProp_Member_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionFunctionLibrary_eventGetMainFaction_Parms, ReturnValue), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics::NewProp_Member,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionFunctionLibrary, nullptr, "GetMainFaction", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics::NinjaFactionFunctionLibrary_eventGetMainFaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics::NinjaFactionFunctionLibrary_eventGetMainFaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionFunctionLibrary::execGetMainFaction)
{
	P_GET_OBJECT(AActor,Z_Param_Member);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaFactionDataAsset**)Z_Param__Result=UNinjaFactionFunctionLibrary::GetMainFaction(Z_Param_Member);
	P_NATIVE_END;
}
// End Class UNinjaFactionFunctionLibrary Function GetMainFaction

// Begin Class UNinjaFactionFunctionLibrary Function GetMainTeamId
struct Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics
{
	struct NinjaFactionFunctionLibrary_eventGetMainTeamId_Parms
	{
		const UNinjaFactionComponent* FactionComponent;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions" },
		{ "Comment", "/**\n     * Provides the Main Team ID from a provided Member Component.\n     *\n     * Used to simplify the retrieval of Team IDs from components that were previously cached.\n     * \n     * @param FactionComponent\x09""Faction Member Component used to retrieve the main team. \n     * @return\x09\x09\x09\x09\x09The Team ID from the Member Component or the default one from Settings.\n     */" },
		{ "DisplayName", "Get Main Team ID" },
		{ "ModuleRelativePath", "Public/NinjaFactionFunctionLibrary.h" },
		{ "ReturnDisplayName", "Team ID" },
		{ "ToolTip", "Provides the Main Team ID from a provided Member Component.\n\nUsed to simplify the retrieval of Team IDs from components that were previously cached.\n\n@param FactionComponent Faction Member Component used to retrieve the main team.\n@return                                 The Team ID from the Member Component or the default one from Settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics::NewProp_FactionComponent = { "FactionComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionFunctionLibrary_eventGetMainTeamId_Parms, FactionComponent), Z_Construct_UClass_UNinjaFactionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionComponent_MetaData), NewProp_FactionComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionFunctionLibrary_eventGetMainTeamId_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics::NewProp_FactionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionFunctionLibrary, nullptr, "GetMainTeamId", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics::NinjaFactionFunctionLibrary_eventGetMainTeamId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics::NinjaFactionFunctionLibrary_eventGetMainTeamId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionFunctionLibrary::execGetMainTeamId)
{
	P_GET_OBJECT(UNinjaFactionComponent,Z_Param_FactionComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UNinjaFactionFunctionLibrary::GetMainTeamId(Z_Param_FactionComponent);
	P_NATIVE_END;
}
// End Class UNinjaFactionFunctionLibrary Function GetMainTeamId

// Begin Class UNinjaFactionFunctionLibrary
void UNinjaFactionFunctionLibrary::StaticRegisterNativesUNinjaFactionFunctionLibrary()
{
	UClass* Class = UNinjaFactionFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttitude", &UNinjaFactionFunctionLibrary::execGetAttitude },
		{ "GetFactionComponent", &UNinjaFactionFunctionLibrary::execGetFactionComponent },
		{ "GetMainFaction", &UNinjaFactionFunctionLibrary::execGetMainFaction },
		{ "GetMainTeamId", &UNinjaFactionFunctionLibrary::execGetMainTeamId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaFactionFunctionLibrary);
UClass* Z_Construct_UClass_UNinjaFactionFunctionLibrary_NoRegister()
{
	return UNinjaFactionFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNinjaFactionFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Faction Function Library" },
		{ "IncludePath", "NinjaFactionFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NinjaFactionFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetAttitude, "GetAttitude" }, // 1423931153
		{ &Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetFactionComponent, "GetFactionComponent" }, // 3130339251
		{ &Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainFaction, "GetMainFaction" }, // 3159118535
		{ &Z_Construct_UFunction_UNinjaFactionFunctionLibrary_GetMainTeamId, "GetMainTeamId" }, // 198979976
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaFactionFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaFactionFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaFactionFunctionLibrary_Statics::ClassParams = {
	&UNinjaFactionFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaFactionFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaFactionFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNinjaFactionFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaFactionFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNinjaFactionFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaFactionFunctionLibrary.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UNinjaFactionFunctionLibrary>()
{
	return UNinjaFactionFunctionLibrary::StaticClass();
}
UNinjaFactionFunctionLibrary::UNinjaFactionFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaFactionFunctionLibrary);
UNinjaFactionFunctionLibrary::~UNinjaFactionFunctionLibrary() {}
// End Class UNinjaFactionFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaFactionFunctionLibrary, UNinjaFactionFunctionLibrary::StaticClass, TEXT("UNinjaFactionFunctionLibrary"), &Z_Registration_Info_UClass_UNinjaFactionFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaFactionFunctionLibrary), 1303268086U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionFunctionLibrary_h_467900421(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
