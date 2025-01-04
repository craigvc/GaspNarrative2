// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeSettlement/Public/Activities/NPCActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCActivity() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
NARRATIVESETTLEMENT_API UClass* Z_Construct_UClass_UNPCActivity();
NARRATIVESETTLEMENT_API UClass* Z_Construct_UClass_UNPCActivity_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeSettlement();
// End Cross Module References

// Begin Class UNPCActivity Function GetActivityTransform
struct NPCActivity_eventGetActivityTransform_Parms
{
	FTransform ReturnValue;
};
static const FName NAME_UNPCActivity_GetActivityTransform = FName(TEXT("GetActivityTransform"));
FTransform UNPCActivity::GetActivityTransform()
{
	UFunction* Func = FindFunctionChecked(NAME_UNPCActivity_GetActivityTransform);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NPCActivity_eventGetActivityTransform_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetActivityTransform_Implementation();
	}
}
struct Z_Construct_UFunction_UNPCActivity_GetActivityTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Activities/NPCActivity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNPCActivity_GetActivityTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivity_eventGetActivityTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivity_GetActivityTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivity_GetActivityTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_GetActivityTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivity_GetActivityTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivity, nullptr, "GetActivityTransform", nullptr, nullptr, Z_Construct_UFunction_UNPCActivity_GetActivityTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_GetActivityTransform_Statics::PropPointers), sizeof(NPCActivity_eventGetActivityTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_GetActivityTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivity_GetActivityTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(NPCActivity_eventGetActivityTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivity_GetActivityTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivity_GetActivityTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivity::execGetActivityTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetActivityTransform_Implementation();
	P_NATIVE_END;
}
// End Class UNPCActivity Function GetActivityTransform

// Begin Class UNPCActivity Function SetupBlackboard
struct NPCActivity_eventSetupBlackboard_Parms
{
	UBlackboardComponent* BB;
};
static const FName NAME_UNPCActivity_SetupBlackboard = FName(TEXT("SetupBlackboard"));
void UNPCActivity::SetupBlackboard(UBlackboardComponent* BB)
{
	UFunction* Func = FindFunctionChecked(NAME_UNPCActivity_SetupBlackboard);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NPCActivity_eventSetupBlackboard_Parms Parms;
		Parms.BB=BB;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetupBlackboard_Implementation(BB);
	}
}
struct Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Allow the activity BP the chance to set some BB values\n" },
		{ "ModuleRelativePath", "Public/Activities/NPCActivity.h" },
		{ "ToolTip", "Allow the activity BP the chance to set some BB values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BB_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::NewProp_BB = { "BB", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivity_eventSetupBlackboard_Parms, BB), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BB_MetaData), NewProp_BB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::NewProp_BB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivity, nullptr, "SetupBlackboard", nullptr, nullptr, Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::PropPointers), sizeof(NPCActivity_eventSetupBlackboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(NPCActivity_eventSetupBlackboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivity_SetupBlackboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivity::execSetupBlackboard)
{
	P_GET_OBJECT(UBlackboardComponent,Z_Param_BB);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupBlackboard_Implementation(Z_Param_BB);
	P_NATIVE_END;
}
// End Class UNPCActivity Function SetupBlackboard

// Begin Class UNPCActivity
void UNPCActivity::StaticRegisterNativesUNPCActivity()
{
	UClass* Class = UNPCActivity::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActivityTransform", &UNPCActivity::execGetActivityTransform },
		{ "SetupBlackboard", &UNPCActivity::execSetupBlackboard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCActivity);
UClass* Z_Construct_UClass_UNPCActivity_NoRegister()
{
	return UNPCActivity::StaticClass();
}
struct Z_Construct_UClass_UNPCActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * NPC Activities essentially wrap a Behaviour tree, and store the variables the trees blackboard will use. \n * The NPCBehaviourComponent begins the tree, sets blackboard values, and unsets the tree when finished. \n * \n * Our owning NPCBehaviourComponent will also serialize us to disk, so when we load our game back in, the blackboard and behavior tree can be kicked off again. \n */" },
		{ "IncludePath", "Activities/NPCActivity.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Activities/NPCActivity.h" },
		{ "ToolTip", "NPC Activities essentially wrap a Behaviour tree, and store the variables the trees blackboard will use.\nThe NPCBehaviourComponent begins the tree, sets blackboard values, and unsets the tree when finished.\n\nOur owning NPCBehaviourComponent will also serialize us to disk, so when we load our game back in, the blackboard and behavior tree can be kicked off again." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//We cache the AI controller \n" },
		{ "ModuleRelativePath", "Public/Activities/NPCActivity.h" },
		{ "ToolTip", "We cache the AI controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityBehaviourTree_MetaData[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//The behaviour tree this activity needs to run\n" },
		{ "ModuleRelativePath", "Public/Activities/NPCActivity.h" },
		{ "ToolTip", "The behaviour tree this activity needs to run" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityTransform_MetaData[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//The transform this activity should be performed at. If zero'ed, this activity will be considered locationless. If you need this dynamically set, override GetActivityTransform()\n" },
		{ "ModuleRelativePath", "Public/Activities/NPCActivity.h" },
		{ "ToolTip", "The transform this activity should be performed at. If zero'ed, this activity will be considered locationless. If you need this dynamically set, override GetActivityTransform()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityRadius_MetaData[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//The acceptable radius within the Activities transform we'll accept for our NPC to be near to be at the activity location.\n" },
		{ "ModuleRelativePath", "Public/Activities/NPCActivity.h" },
		{ "ToolTip", "The acceptable radius within the Activities transform we'll accept for our NPC to be near to be at the activity location." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityBehaviourTree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivityTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActivityRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNPCActivity_GetActivityTransform, "GetActivityTransform" }, // 2375874313
		{ &Z_Construct_UFunction_UNPCActivity_SetupBlackboard, "SetupBlackboard" }, // 3330626085
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCActivity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivity_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivity, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIController_MetaData), NewProp_AIController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivity_Statics::NewProp_ActivityBehaviourTree = { "ActivityBehaviourTree", nullptr, (EPropertyFlags)0x0124080001000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivity, ActivityBehaviourTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityBehaviourTree_MetaData), NewProp_ActivityBehaviourTree_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPCActivity_Statics::NewProp_ActivityTransform = { "ActivityTransform", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivity, ActivityTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityTransform_MetaData), NewProp_ActivityTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPCActivity_Statics::NewProp_ActivityRadius = { "ActivityRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivity, ActivityRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityRadius_MetaData), NewProp_ActivityRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivity_Statics::NewProp_AIController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivity_Statics::NewProp_ActivityBehaviourTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivity_Statics::NewProp_ActivityTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivity_Statics::NewProp_ActivityRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCActivity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeSettlement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCActivity_Statics::ClassParams = {
	&UNPCActivity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNPCActivity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivity_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivity_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCActivity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCActivity()
{
	if (!Z_Registration_Info_UClass_UNPCActivity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCActivity.OuterSingleton, Z_Construct_UClass_UNPCActivity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCActivity.OuterSingleton;
}
template<> NARRATIVESETTLEMENT_API UClass* StaticClass<UNPCActivity>()
{
	return UNPCActivity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCActivity);
UNPCActivity::~UNPCActivity() {}
// End Class UNPCActivity

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPCActivity, UNPCActivity::StaticClass, TEXT("UNPCActivity"), &Z_Registration_Info_UClass_UNPCActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCActivity), 1800433678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h_135247052(TEXT("/Script/NarrativeSettlement"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
