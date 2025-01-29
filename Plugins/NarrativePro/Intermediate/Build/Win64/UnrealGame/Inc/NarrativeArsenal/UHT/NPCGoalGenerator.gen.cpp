// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/Activities/NPCGoalGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCGoalGenerator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalGenerator();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalGenerator_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNPCGoalGenerator Function AddGoalItem
struct Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics
{
	struct NPCGoalGenerator_eventAddGoalItem_Parms
	{
		UNPCGoalItem* Goal;
		bool bTriggerReselect;
		UNPCGoalItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activities" },
		{ "Comment", "////Use this to tell the NPC activity component to add the goal. \n" },
		{ "CPP_Default_bTriggerReselect", "false" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalGenerator.h" },
		{ "ToolTip", "/Use this to tell the NPC activity component to add the goal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerReselect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Goal;
	static void NewProp_bTriggerReselect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerReselect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCGoalGenerator_eventAddGoalItem_Parms, Goal), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::NewProp_bTriggerReselect_SetBit(void* Obj)
{
	((NPCGoalGenerator_eventAddGoalItem_Parms*)Obj)->bTriggerReselect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::NewProp_bTriggerReselect = { "bTriggerReselect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NPCGoalGenerator_eventAddGoalItem_Parms), &Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::NewProp_bTriggerReselect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggerReselect_MetaData), NewProp_bTriggerReselect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCGoalGenerator_eventAddGoalItem_Parms, ReturnValue), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::NewProp_Goal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::NewProp_bTriggerReselect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCGoalGenerator, nullptr, "AddGoalItem", nullptr, nullptr, Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::NPCGoalGenerator_eventAddGoalItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::NPCGoalGenerator_eventAddGoalItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCGoalGenerator::execAddGoalItem)
{
	P_GET_OBJECT(UNPCGoalItem,Z_Param_Goal);
	P_GET_UBOOL(Z_Param_bTriggerReselect);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNPCGoalItem**)Z_Param__Result=P_THIS->AddGoalItem(Z_Param_Goal,Z_Param_bTriggerReselect);
	P_NATIVE_END;
}
// End Class UNPCGoalGenerator Function AddGoalItem

// Begin Class UNPCGoalGenerator Function InitializeGoalGenerator
static const FName NAME_UNPCGoalGenerator_InitializeGoalGenerator = FName(TEXT("InitializeGoalGenerator"));
void UNPCGoalGenerator::InitializeGoalGenerator()
{
	UFunction* Func = FindFunctionChecked(NAME_UNPCGoalGenerator_InitializeGoalGenerator);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		InitializeGoalGenerator_Implementation();
	}
}
struct Z_Construct_UFunction_UNPCGoalGenerator_InitializeGoalGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Goal Generator" },
		{ "Comment", "//Use this event to set your generator up, bind it to an event, etc.\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalGenerator.h" },
		{ "ToolTip", "Use this event to set your generator up, bind it to an event, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCGoalGenerator_InitializeGoalGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCGoalGenerator, nullptr, "InitializeGoalGenerator", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalGenerator_InitializeGoalGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCGoalGenerator_InitializeGoalGenerator_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNPCGoalGenerator_InitializeGoalGenerator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCGoalGenerator_InitializeGoalGenerator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCGoalGenerator::execInitializeGoalGenerator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeGoalGenerator_Implementation();
	P_NATIVE_END;
}
// End Class UNPCGoalGenerator Function InitializeGoalGenerator

// Begin Class UNPCGoalGenerator Function RemoveGoalItem
struct Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem_Statics
{
	struct NPCGoalGenerator_eventRemoveGoalItem_Parms
	{
		UNPCGoalItem* Goal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activities" },
		{ "Comment", "////Use this to tell the NPC activity component to remove a goal we've made \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalGenerator.h" },
		{ "ToolTip", "/Use this to tell the NPC activity component to remove a goal we've made" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCGoalGenerator_eventRemoveGoalItem_Parms, Goal), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem_Statics::NewProp_Goal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCGoalGenerator, nullptr, "RemoveGoalItem", nullptr, nullptr, Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem_Statics::NPCGoalGenerator_eventRemoveGoalItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem_Statics::NPCGoalGenerator_eventRemoveGoalItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCGoalGenerator::execRemoveGoalItem)
{
	P_GET_OBJECT(UNPCGoalItem,Z_Param_Goal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGoalItem(Z_Param_Goal);
	P_NATIVE_END;
}
// End Class UNPCGoalGenerator Function RemoveGoalItem

// Begin Class UNPCGoalGenerator
void UNPCGoalGenerator::StaticRegisterNativesUNPCGoalGenerator()
{
	UClass* Class = UNPCGoalGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGoalItem", &UNPCGoalGenerator::execAddGoalItem },
		{ "InitializeGoalGenerator", &UNPCGoalGenerator::execInitializeGoalGenerator },
		{ "RemoveGoalItem", &UNPCGoalGenerator::execRemoveGoalItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCGoalGenerator);
UClass* Z_Construct_UClass_UNPCGoalGenerator_NoRegister()
{
	return UNPCGoalGenerator::StaticClass();
}
struct Z_Construct_UClass_UNPCGoalGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Goal generators generate goals for your NPCs to do. They provide a bit of optimization in that you can only add the generators your \n * NPC requires so this will remove lots of unnesseccary processing time. They also allow for configuration, ie your legendary enemy could \n * have further distance for its GoalGenerator_FindAttackTarget, whereas your novice enemy might have a shorter distance. \n * \n * Goal generators should be added to your NPCs definition. They will then be registered with the NPCs Activity Component. \n * For more information, please check out the docs: https://docs.narrativetools.io/\n */" },
		{ "IncludePath", "AI/Activities/NPCGoalGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalGenerator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Goal generators generate goals for your NPCs to do. They provide a bit of optimization in that you can only add the generators your\nNPC requires so this will remove lots of unnesseccary processing time. They also allow for configuration, ie your legendary enemy could\nhave further distance for its GoalGenerator_FindAttackTarget, whereas your novice enemy might have a shorter distance.\n\nGoal generators should be added to your NPCs definition. They will then be registered with the NPCs Activity Component.\nFor more information, please check out the docs: https://docs.narrativetools.io/" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[] = {
		{ "Category", "Goal Generator" },
		{ "Comment", "//We cache the AI controller \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalGenerator.h" },
		{ "ToolTip", "We cache the AI controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActivityComponent_MetaData[] = {
		{ "Category", "Goal Generator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActivityComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNPCGoalGenerator_AddGoalItem, "AddGoalItem" }, // 3075396703
		{ &Z_Construct_UFunction_UNPCGoalGenerator_InitializeGoalGenerator, "InitializeGoalGenerator" }, // 3691840349
		{ &Z_Construct_UFunction_UNPCGoalGenerator_RemoveGoalItem, "RemoveGoalItem" }, // 1003254889
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCGoalGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCGoalGenerator_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0124080000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCGoalGenerator, OwnerController), Z_Construct_UClass_ANarrativeNPCController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerController_MetaData), NewProp_OwnerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCGoalGenerator_Statics::NewProp_OwnerActivityComponent = { "OwnerActivityComponent", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCGoalGenerator, OwnerActivityComponent), Z_Construct_UClass_UNPCActivityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerActivityComponent_MetaData), NewProp_OwnerActivityComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCGoalGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCGoalGenerator_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCGoalGenerator_Statics::NewProp_OwnerActivityComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCGoalGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCGoalGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCGoalGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCGoalGenerator_Statics::ClassParams = {
	&UNPCGoalGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNPCGoalGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCGoalGenerator_Statics::PropPointers),
	0,
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCGoalGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCGoalGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCGoalGenerator()
{
	if (!Z_Registration_Info_UClass_UNPCGoalGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCGoalGenerator.OuterSingleton, Z_Construct_UClass_UNPCGoalGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCGoalGenerator.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNPCGoalGenerator>()
{
	return UNPCGoalGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCGoalGenerator);
UNPCGoalGenerator::~UNPCGoalGenerator() {}
// End Class UNPCGoalGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPCGoalGenerator, UNPCGoalGenerator::StaticClass, TEXT("UNPCGoalGenerator"), &Z_Registration_Info_UClass_UNPCGoalGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCGoalGenerator), 1494161622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalGenerator_h_1665375492(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
