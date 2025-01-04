// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/GameFramework/NinjaFactionAttitudeSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionAttitudeSolver() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionAttitudeSolver();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionAttitudeSolver_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionComponent_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDatabase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class UNinjaFactionAttitudeSolver Function GetFactionComponent
struct Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics
{
	struct NinjaFactionAttitudeSolver_eventGetFactionComponent_Parms
	{
		const AActor* Member;
		UNinjaFactionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Attitude Solver" },
		{ "Comment", "/**\n     * Retrieves the Faction Component \n     * \n     * @param Member    Actor providing the component.\n     * @return          The component assigned to the actor. May be null.\n     */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionAttitudeSolver.h" },
		{ "ToolTip", "Retrieves the Faction Component\n\n@param Member    Actor providing the component.\n@return          The component assigned to the actor. May be null." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionAttitudeSolver_eventGetFactionComponent_Parms, Member), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Member_MetaData), NewProp_Member_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionAttitudeSolver_eventGetFactionComponent_Parms, ReturnValue), Z_Construct_UClass_UNinjaFactionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics::NewProp_Member,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionAttitudeSolver, nullptr, "GetFactionComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics::NinjaFactionAttitudeSolver_eventGetFactionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics::NinjaFactionAttitudeSolver_eventGetFactionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionAttitudeSolver::execGetFactionComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Member);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaFactionComponent**)Z_Param__Result=UNinjaFactionAttitudeSolver::GetFactionComponent(Z_Param_Member);
	P_NATIVE_END;
}
// End Class UNinjaFactionAttitudeSolver Function GetFactionComponent

// Begin Class UNinjaFactionAttitudeSolver Function GetMainFaction
struct Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics
{
	struct NinjaFactionAttitudeSolver_eventGetMainFaction_Parms
	{
		const AActor* Member;
		UNinjaFactionDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Attitude Solver" },
		{ "Comment", "/**\n     * Provides the Main Faction assigned to a member.\n     *\n     * @param Member    Actor implementing the Faction Member interface.\n     * @return          The Main Faction assigned to the actor. May be null.\n     */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionAttitudeSolver.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionAttitudeSolver_eventGetMainFaction_Parms, Member), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Member_MetaData), NewProp_Member_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionAttitudeSolver_eventGetMainFaction_Parms, ReturnValue), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics::NewProp_Member,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionAttitudeSolver, nullptr, "GetMainFaction", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics::NinjaFactionAttitudeSolver_eventGetMainFaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics::NinjaFactionAttitudeSolver_eventGetMainFaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionAttitudeSolver::execGetMainFaction)
{
	P_GET_OBJECT(AActor,Z_Param_Member);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaFactionDataAsset**)Z_Param__Result=UNinjaFactionAttitudeSolver::GetMainFaction(Z_Param_Member);
	P_NATIVE_END;
}
// End Class UNinjaFactionAttitudeSolver Function GetMainFaction

// Begin Class UNinjaFactionAttitudeSolver Function InitializeSolver
static const FName NAME_UNinjaFactionAttitudeSolver_InitializeSolver = FName(TEXT("InitializeSolver"));
void UNinjaFactionAttitudeSolver::InitializeSolver()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionAttitudeSolver_InitializeSolver);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		InitializeSolver_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaFactionAttitudeSolver_InitializeSolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Faction Attitude Solver" },
		{ "Comment", "/**\n\x09 * Allows the initialization of the solver.\n\x09 *\n\x09 * Called by the subsystem while instantiating the Solver. This is called after the Database\n\x09 * has been initialized, so if you need to use the database, it will be valid at this point.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionAttitudeSolver.h" },
		{ "ToolTip", "Allows the initialization of the solver.\n\nCalled by the subsystem while instantiating the Solver. This is called after the Database\nhas been initialized, so if you need to use the database, it will be valid at this point." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionAttitudeSolver_InitializeSolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionAttitudeSolver, nullptr, "InitializeSolver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionAttitudeSolver_InitializeSolver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionAttitudeSolver_InitializeSolver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaFactionAttitudeSolver_InitializeSolver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionAttitudeSolver_InitializeSolver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionAttitudeSolver::execInitializeSolver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeSolver_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaFactionAttitudeSolver Function InitializeSolver

// Begin Class UNinjaFactionAttitudeSolver Function SolveAttitude
struct NinjaFactionAttitudeSolver_eventSolveAttitude_Parms
{
	const AActor* Source;
	const AActor* Target;
	TEnumAsByte<ETeamAttitude::Type> ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaFactionAttitudeSolver_eventSolveAttitude_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UNinjaFactionAttitudeSolver_SolveAttitude = FName(TEXT("SolveAttitude"));
ETeamAttitude::Type UNinjaFactionAttitudeSolver::SolveAttitude(const AActor* Source, const AActor* Target) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionAttitudeSolver_SolveAttitude);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaFactionAttitudeSolver_eventSolveAttitude_Parms Parms;
		Parms.Source=Source;
		Parms.Target=Target;
		const_cast<UNinjaFactionAttitudeSolver*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaFactionAttitudeSolver*>(this)->SolveAttitude_Implementation(Source, Target);
	}
}
struct Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Faction Attitude Solver" },
		{ "Comment", "/**\n     * Determines the attitude between two pawns.\n     * \n     * @param Source    Source Pawn from which the faction test is done. Must be a valid faction member.\n     * @param Target    Target Pawn to which the faction test is done against. Must be a valid faction member.\n     * @return          The attitude between both actors.\n     */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionAttitudeSolver.h" },
		{ "ToolTip", "Determines the attitude between two pawns.\n\n@param Source    Source Pawn from which the faction test is done. Must be a valid faction member.\n@param Target    Target Pawn to which the faction test is done against. Must be a valid faction member.\n@return          The attitude between both actors." },
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
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionAttitudeSolver_eventSolveAttitude_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionAttitudeSolver_eventSolveAttitude_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionAttitudeSolver_eventSolveAttitude_Parms, ReturnValue), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(0, nullptr) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionAttitudeSolver, nullptr, "SolveAttitude", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics::PropPointers), sizeof(NinjaFactionAttitudeSolver_eventSolveAttitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaFactionAttitudeSolver_eventSolveAttitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionAttitudeSolver::execSolveAttitude)
{
	P_GET_OBJECT(AActor,Z_Param_Source);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ETeamAttitude::Type>*)Z_Param__Result=P_THIS->SolveAttitude_Implementation(Z_Param_Source,Z_Param_Target);
	P_NATIVE_END;
}
// End Class UNinjaFactionAttitudeSolver Function SolveAttitude

// Begin Class UNinjaFactionAttitudeSolver
void UNinjaFactionAttitudeSolver::StaticRegisterNativesUNinjaFactionAttitudeSolver()
{
	UClass* Class = UNinjaFactionAttitudeSolver::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFactionComponent", &UNinjaFactionAttitudeSolver::execGetFactionComponent },
		{ "GetMainFaction", &UNinjaFactionAttitudeSolver::execGetMainFaction },
		{ "InitializeSolver", &UNinjaFactionAttitudeSolver::execInitializeSolver },
		{ "SolveAttitude", &UNinjaFactionAttitudeSolver::execSolveAttitude },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaFactionAttitudeSolver);
UClass* Z_Construct_UClass_UNinjaFactionAttitudeSolver_NoRegister()
{
	return UNinjaFactionAttitudeSolver::StaticClass();
}
struct Z_Construct_UClass_UNinjaFactionAttitudeSolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base implementation of a Faction Solver.\n */" },
		{ "DisplayName", "Faction Attitude Solver" },
		{ "IncludePath", "GameFramework/NinjaFactionAttitudeSolver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionAttitudeSolver.h" },
		{ "ToolTip", "Base implementation of a Faction Solver." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Database_MetaData[] = {
		{ "Category", "Faction Attitude Solver" },
		{ "Comment", "/** Database available to this solver. Valid while the subsystem is active. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionAttitudeSolver.h" },
		{ "ToolTip", "Database available to this solver. Valid while the subsystem is active." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Database;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetFactionComponent, "GetFactionComponent" }, // 783688241
		{ &Z_Construct_UFunction_UNinjaFactionAttitudeSolver_GetMainFaction, "GetMainFaction" }, // 1870985582
		{ &Z_Construct_UFunction_UNinjaFactionAttitudeSolver_InitializeSolver, "InitializeSolver" }, // 3017196952
		{ &Z_Construct_UFunction_UNinjaFactionAttitudeSolver_SolveAttitude, "SolveAttitude" }, // 2054725230
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaFactionAttitudeSolver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaFactionAttitudeSolver_Statics::NewProp_Database = { "Database", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionAttitudeSolver, Database), Z_Construct_UClass_UNinjaFactionDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Database_MetaData), NewProp_Database_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaFactionAttitudeSolver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionAttitudeSolver_Statics::NewProp_Database,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionAttitudeSolver_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaFactionAttitudeSolver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionAttitudeSolver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaFactionAttitudeSolver_Statics::ClassParams = {
	&UNinjaFactionAttitudeSolver::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaFactionAttitudeSolver_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionAttitudeSolver_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionAttitudeSolver_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaFactionAttitudeSolver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaFactionAttitudeSolver()
{
	if (!Z_Registration_Info_UClass_UNinjaFactionAttitudeSolver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaFactionAttitudeSolver.OuterSingleton, Z_Construct_UClass_UNinjaFactionAttitudeSolver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaFactionAttitudeSolver.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UNinjaFactionAttitudeSolver>()
{
	return UNinjaFactionAttitudeSolver::StaticClass();
}
UNinjaFactionAttitudeSolver::UNinjaFactionAttitudeSolver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaFactionAttitudeSolver);
UNinjaFactionAttitudeSolver::~UNinjaFactionAttitudeSolver() {}
// End Class UNinjaFactionAttitudeSolver

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaFactionAttitudeSolver, UNinjaFactionAttitudeSolver::StaticClass, TEXT("UNinjaFactionAttitudeSolver"), &Z_Registration_Info_UClass_UNinjaFactionAttitudeSolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaFactionAttitudeSolver), 1207280650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h_3004479753(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
