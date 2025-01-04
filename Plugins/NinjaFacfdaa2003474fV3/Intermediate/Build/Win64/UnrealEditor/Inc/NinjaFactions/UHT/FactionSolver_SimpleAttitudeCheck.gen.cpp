// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/GameFramework/FactionSolvers/FactionSolver_SimpleAttitudeCheck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionSolver_SimpleAttitudeCheck() {}

// Begin Cross Module References
NINJAFACTIONS_API UClass* Z_Construct_UClass_UFactionSolver_SimpleAttitudeCheck();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UFactionSolver_SimpleAttitudeCheck_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionAttitudeSolver();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class UFactionSolver_SimpleAttitudeCheck Function IsSameFaction
struct FactionSolver_SimpleAttitudeCheck_eventIsSameFaction_Parms
{
	const UNinjaFactionDataAsset* SourceFactionData;
	const UNinjaFactionDataAsset* TargetFactionData;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	FactionSolver_SimpleAttitudeCheck_eventIsSameFaction_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UFactionSolver_SimpleAttitudeCheck_IsSameFaction = FName(TEXT("IsSameFaction"));
bool UFactionSolver_SimpleAttitudeCheck::IsSameFaction(const UNinjaFactionDataAsset* SourceFactionData, const UNinjaFactionDataAsset* TargetFactionData) const
{
	UFunction* Func = FindFunctionChecked(NAME_UFactionSolver_SimpleAttitudeCheck_IsSameFaction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FactionSolver_SimpleAttitudeCheck_eventIsSameFaction_Parms Parms;
		Parms.SourceFactionData=SourceFactionData;
		Parms.TargetFactionData=TargetFactionData;
		const_cast<UFactionSolver_SimpleAttitudeCheck*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UFactionSolver_SimpleAttitudeCheck*>(this)->IsSameFaction_Implementation(SourceFactionData, TargetFactionData);
	}
}
struct Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attitude Check" },
		{ "Comment", "/**\n     * Dedicated logic to determine Faction Equality.\n     *\n     * By default this is determined by the Faction Tags, but games may have different logic for this, such\n     * as considering the Team Id instead, or simply considering the Data Asset itself, to simplify the check.\n     * \n     * @param SourceFactionData\x09\x09Source Faction to be checked. Must be valid. \n     * @param TargetFactionData\x09\x09Target Faction to be checked. Must be valid.\n     * @return\x09\x09\x09\x09\x09\x09True if both factions are considered to be equal.\n     */" },
		{ "ModuleRelativePath", "Public/GameFramework/FactionSolvers/FactionSolver_SimpleAttitudeCheck.h" },
		{ "ToolTip", "Dedicated logic to determine Faction Equality.\n\nBy default this is determined by the Faction Tags, but games may have different logic for this, such\nas considering the Team Id instead, or simply considering the Data Asset itself, to simplify the check.\n\n@param SourceFactionData                Source Faction to be checked. Must be valid.\n@param TargetFactionData                Target Faction to be checked. Must be valid.\n@return                                         True if both factions are considered to be equal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceFactionData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetFactionData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::NewProp_SourceFactionData = { "SourceFactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactionSolver_SimpleAttitudeCheck_eventIsSameFaction_Parms, SourceFactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFactionData_MetaData), NewProp_SourceFactionData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::NewProp_TargetFactionData = { "TargetFactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactionSolver_SimpleAttitudeCheck_eventIsSameFaction_Parms, TargetFactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFactionData_MetaData), NewProp_TargetFactionData_MetaData) };
void Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FactionSolver_SimpleAttitudeCheck_eventIsSameFaction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FactionSolver_SimpleAttitudeCheck_eventIsSameFaction_Parms), &Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::NewProp_SourceFactionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::NewProp_TargetFactionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionSolver_SimpleAttitudeCheck, nullptr, "IsSameFaction", nullptr, nullptr, Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::PropPointers), sizeof(FactionSolver_SimpleAttitudeCheck_eventIsSameFaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(FactionSolver_SimpleAttitudeCheck_eventIsSameFaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFactionSolver_SimpleAttitudeCheck::execIsSameFaction)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_SourceFactionData);
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_TargetFactionData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSameFaction_Implementation(Z_Param_SourceFactionData,Z_Param_TargetFactionData);
	P_NATIVE_END;
}
// End Class UFactionSolver_SimpleAttitudeCheck Function IsSameFaction

// Begin Class UFactionSolver_SimpleAttitudeCheck
void UFactionSolver_SimpleAttitudeCheck::StaticRegisterNativesUFactionSolver_SimpleAttitudeCheck()
{
	UClass* Class = UFactionSolver_SimpleAttitudeCheck::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsSameFaction", &UFactionSolver_SimpleAttitudeCheck::execIsSameFaction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactionSolver_SimpleAttitudeCheck);
UClass* Z_Construct_UClass_UFactionSolver_SimpleAttitudeCheck_NoRegister()
{
	return UFactionSolver_SimpleAttitudeCheck::StaticClass();
}
struct Z_Construct_UClass_UFactionSolver_SimpleAttitudeCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Attitude Solver that considers the Faction Attitude configuration.\n *\n * Ultimately, once Factions are gathered from the participants, it will delegate the resolution to the\n * Faction Data Asset and its internal properties (default alignment and alignment matrix).\n */" },
		{ "DisplayName", "Faction Attitude Solver: Simple Attitude Check" },
		{ "IncludePath", "GameFramework/FactionSolvers/FactionSolver_SimpleAttitudeCheck.h" },
		{ "ModuleRelativePath", "Public/GameFramework/FactionSolvers/FactionSolver_SimpleAttitudeCheck.h" },
		{ "ToolTip", "Attitude Solver that considers the Faction Attitude configuration.\n\nUltimately, once Factions are gathered from the participants, it will delegate the resolution to the\nFaction Data Asset and its internal properties (default alignment and alignment matrix)." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFactionSolver_SimpleAttitudeCheck_IsSameFaction, "IsSameFaction" }, // 1051006794
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactionSolver_SimpleAttitudeCheck>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactionSolver_SimpleAttitudeCheck_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaFactionAttitudeSolver,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactionSolver_SimpleAttitudeCheck_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactionSolver_SimpleAttitudeCheck_Statics::ClassParams = {
	&UFactionSolver_SimpleAttitudeCheck::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactionSolver_SimpleAttitudeCheck_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactionSolver_SimpleAttitudeCheck_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactionSolver_SimpleAttitudeCheck()
{
	if (!Z_Registration_Info_UClass_UFactionSolver_SimpleAttitudeCheck.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactionSolver_SimpleAttitudeCheck.OuterSingleton, Z_Construct_UClass_UFactionSolver_SimpleAttitudeCheck_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactionSolver_SimpleAttitudeCheck.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UFactionSolver_SimpleAttitudeCheck>()
{
	return UFactionSolver_SimpleAttitudeCheck::StaticClass();
}
UFactionSolver_SimpleAttitudeCheck::UFactionSolver_SimpleAttitudeCheck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactionSolver_SimpleAttitudeCheck);
UFactionSolver_SimpleAttitudeCheck::~UFactionSolver_SimpleAttitudeCheck() {}
// End Class UFactionSolver_SimpleAttitudeCheck

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_FactionSolvers_FactionSolver_SimpleAttitudeCheck_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactionSolver_SimpleAttitudeCheck, UFactionSolver_SimpleAttitudeCheck::StaticClass, TEXT("UFactionSolver_SimpleAttitudeCheck"), &Z_Registration_Info_UClass_UFactionSolver_SimpleAttitudeCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactionSolver_SimpleAttitudeCheck), 4205164094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_FactionSolvers_FactionSolver_SimpleAttitudeCheck_h_1640115964(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_FactionSolvers_FactionSolver_SimpleAttitudeCheck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_FactionSolvers_FactionSolver_SimpleAttitudeCheck_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
