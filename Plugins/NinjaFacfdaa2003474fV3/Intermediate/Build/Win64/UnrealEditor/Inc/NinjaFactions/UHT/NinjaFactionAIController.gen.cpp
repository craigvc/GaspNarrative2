// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/AI/NinjaFactionAIController.h"
#include "NinjaFactions/Public/Types/FFactionMembership.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
NINJAFACTIONS_API UClass* Z_Construct_UClass_ANinjaFactionAIController();
NINJAFACTIONS_API UClass* Z_Construct_UClass_ANinjaFactionAIController_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionComponent_NoRegister();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionMembership();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class ANinjaFactionAIController Function InitializeDefaultTeam
struct Z_Construct_UFunction_ANinjaFactionAIController_InitializeDefaultTeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction AI Controller" },
		{ "Comment", "/**\n\x09 * Initializes the Cached Team ID with the default Team.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AI/NinjaFactionAIController.h" },
		{ "ToolTip", "Initializes the Cached Team ID with the default Team." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaFactionAIController_InitializeDefaultTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaFactionAIController, nullptr, "InitializeDefaultTeam", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaFactionAIController_InitializeDefaultTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaFactionAIController_InitializeDefaultTeam_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaFactionAIController_InitializeDefaultTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaFactionAIController_InitializeDefaultTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaFactionAIController::execInitializeDefaultTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeDefaultTeam();
	P_NATIVE_END;
}
// End Class ANinjaFactionAIController Function InitializeDefaultTeam

// Begin Class ANinjaFactionAIController Function OnFactionAdded
struct NinjaFactionAIController_eventOnFactionAdded_Parms
{
	FFactionMembership FactionMembership;
};
static const FName NAME_ANinjaFactionAIController_OnFactionAdded = FName(TEXT("OnFactionAdded"));
void ANinjaFactionAIController::OnFactionAdded(FFactionMembership const& FactionMembership)
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaFactionAIController_OnFactionAdded);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaFactionAIController_eventOnFactionAdded_Parms Parms;
		Parms.FactionMembership=FactionMembership;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnFactionAdded_Implementation(FactionMembership);
	}
}
struct Z_Construct_UFunction_ANinjaFactionAIController_OnFactionAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Faction AI Controller" },
		{ "Comment", "/**\n\x09 * Invoked when a faction was added to this controller's pawn.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AI/NinjaFactionAIController.h" },
		{ "ToolTip", "Invoked when a faction was added to this controller's pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionMembership_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionMembership;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaFactionAIController_OnFactionAdded_Statics::NewProp_FactionMembership = { "FactionMembership", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionAIController_eventOnFactionAdded_Parms, FactionMembership), Z_Construct_UScriptStruct_FFactionMembership, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionMembership_MetaData), NewProp_FactionMembership_MetaData) }; // 2510799810
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaFactionAIController_OnFactionAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaFactionAIController_OnFactionAdded_Statics::NewProp_FactionMembership,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaFactionAIController_OnFactionAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaFactionAIController_OnFactionAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaFactionAIController, nullptr, "OnFactionAdded", nullptr, nullptr, Z_Construct_UFunction_ANinjaFactionAIController_OnFactionAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaFactionAIController_OnFactionAdded_Statics::PropPointers), sizeof(NinjaFactionAIController_eventOnFactionAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaFactionAIController_OnFactionAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaFactionAIController_OnFactionAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaFactionAIController_eventOnFactionAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaFactionAIController_OnFactionAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaFactionAIController_OnFactionAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaFactionAIController::execOnFactionAdded)
{
	P_GET_STRUCT_REF(FFactionMembership,Z_Param_Out_FactionMembership);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFactionAdded_Implementation(Z_Param_Out_FactionMembership);
	P_NATIVE_END;
}
// End Class ANinjaFactionAIController Function OnFactionAdded

// Begin Class ANinjaFactionAIController Function RefreshPerceptionSystem
struct Z_Construct_UFunction_ANinjaFactionAIController_RefreshPerceptionSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction AI Controller" },
		{ "Comment", "/**\n\x09 * Requests the Perception System to update the team for this Controller.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AI/NinjaFactionAIController.h" },
		{ "ToolTip", "Requests the Perception System to update the team for this Controller." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaFactionAIController_RefreshPerceptionSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaFactionAIController, nullptr, "RefreshPerceptionSystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaFactionAIController_RefreshPerceptionSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaFactionAIController_RefreshPerceptionSystem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaFactionAIController_RefreshPerceptionSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaFactionAIController_RefreshPerceptionSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaFactionAIController::execRefreshPerceptionSystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshPerceptionSystem();
	P_NATIVE_END;
}
// End Class ANinjaFactionAIController Function RefreshPerceptionSystem

// Begin Class ANinjaFactionAIController
void ANinjaFactionAIController::StaticRegisterNativesANinjaFactionAIController()
{
	UClass* Class = ANinjaFactionAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeDefaultTeam", &ANinjaFactionAIController::execInitializeDefaultTeam },
		{ "OnFactionAdded", &ANinjaFactionAIController::execOnFactionAdded },
		{ "RefreshPerceptionSystem", &ANinjaFactionAIController::execRefreshPerceptionSystem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaFactionAIController);
UClass* Z_Construct_UClass_ANinjaFactionAIController_NoRegister()
{
	return ANinjaFactionAIController::StaticClass();
}
struct Z_Construct_UClass_ANinjaFactionAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base AI Controller provided by the Ninja Faction System.\n *\n * It handles the integration with the Faction Component/Subsystem, connecting these elements\n * to Unreal Engine's Team Resolution Framework/Perception System.\n *\n * Using this controller is not mandatory. You are free to implement equivalent functionality\n * in your own AI Controller, in any other way you see fit, as this particular controller is\n * not directly used by the Faction Framework in any way.\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/NinjaFactionAIController.h" },
		{ "ModuleRelativePath", "Public/AI/NinjaFactionAIController.h" },
		{ "ToolTip", "Base AI Controller provided by the Ninja Faction System.\n\nIt handles the integration with the Faction Component/Subsystem, connecting these elements\nto Unreal Engine's Team Resolution Framework/Perception System.\n\nUsing this controller is not mandatory. You are free to implement equivalent functionality\nin your own AI Controller, in any other way you see fit, as this particular controller is\nnot directly used by the Faction Framework in any way." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionComponent_MetaData[] = {
		{ "Comment", "/** Cached faction component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/NinjaFactionAIController.h" },
		{ "ToolTip", "Cached faction component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANinjaFactionAIController_InitializeDefaultTeam, "InitializeDefaultTeam" }, // 2388562882
		{ &Z_Construct_UFunction_ANinjaFactionAIController_OnFactionAdded, "OnFactionAdded" }, // 365843566
		{ &Z_Construct_UFunction_ANinjaFactionAIController_RefreshPerceptionSystem, "RefreshPerceptionSystem" }, // 3087305605
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaFactionAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaFactionAIController_Statics::NewProp_FactionComponent = { "FactionComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaFactionAIController, FactionComponent), Z_Construct_UClass_UNinjaFactionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionComponent_MetaData), NewProp_FactionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaFactionAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaFactionAIController_Statics::NewProp_FactionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaFactionAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaFactionAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaFactionAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaFactionAIController_Statics::ClassParams = {
	&ANinjaFactionAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANinjaFactionAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaFactionAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaFactionAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaFactionAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaFactionAIController()
{
	if (!Z_Registration_Info_UClass_ANinjaFactionAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaFactionAIController.OuterSingleton, Z_Construct_UClass_ANinjaFactionAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaFactionAIController.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<ANinjaFactionAIController>()
{
	return ANinjaFactionAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaFactionAIController);
ANinjaFactionAIController::~ANinjaFactionAIController() {}
// End Class ANinjaFactionAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaFactionAIController, ANinjaFactionAIController::StaticClass, TEXT("ANinjaFactionAIController"), &Z_Registration_Info_UClass_ANinjaFactionAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaFactionAIController), 2550454556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h_1775777156(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
