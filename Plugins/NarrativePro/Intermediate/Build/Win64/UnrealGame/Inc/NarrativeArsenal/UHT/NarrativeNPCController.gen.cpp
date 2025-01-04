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
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCController();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister();
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

// Begin Class ANarrativeNPCController
void ANarrativeNPCController::StaticRegisterNativesANarrativeNPCController()
{
	UClass* Class = ANarrativeNPCController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentTree", &ANarrativeNPCController::execGetCurrentTree },
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativeNPCController_CleanUp, "CleanUp" }, // 3844948430
		{ &Z_Construct_UFunction_ANarrativeNPCController_GetCurrentTree, "GetCurrentTree" }, // 449105167
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeNPCController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANarrativeNPCController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeNPCController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANarrativeNPCController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativeNPCController, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativeNPCController, INarrativeTeamAgentInterface), false },  // 1836146804
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativeNPCController_Statics::ClassParams = {
	&ANarrativeNPCController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
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
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativeNPCController, ANarrativeNPCController::StaticClass, TEXT("ANarrativeNPCController"), &Z_Registration_Info_UClass_ANarrativeNPCController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeNPCController), 1430890818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_1564467692(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
