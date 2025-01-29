// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/Activities/NPCActivitySchedule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCActivitySchedule() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivitySchedule();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivitySchedule_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalItem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UScheduledBehavior();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UScheduledBehavior_AddNPCGoal();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UScheduledBehavior_NPC();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UScheduledBehavior_NPC_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UScheduledBehavior_NPC
void UScheduledBehavior_NPC::StaticRegisterNativesUScheduledBehavior_NPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScheduledBehavior_NPC);
UClass* Z_Construct_UClass_UScheduledBehavior_NPC_NoRegister()
{
	return UScheduledBehavior_NPC::StaticClass();
}
struct Z_Construct_UClass_UScheduledBehavior_NPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "Comment", "//A scheduled behavior owned by an NPCs activity component \n" },
		{ "IncludePath", "AI/Activities/NPCActivitySchedule.h" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivitySchedule.h" },
		{ "ToolTip", "A scheduled behavior owned by an NPCs activity component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActivityComponent_MetaData[] = {
		{ "Comment", "//The component that owns this scheduled behavior \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivitySchedule.h" },
		{ "ToolTip", "The component that owns this scheduled behavior" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActivityComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScheduledBehavior_NPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScheduledBehavior_NPC_Statics::NewProp_OwnerActivityComponent = { "OwnerActivityComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScheduledBehavior_NPC, OwnerActivityComponent), Z_Construct_UClass_UNPCActivityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerActivityComponent_MetaData), NewProp_OwnerActivityComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScheduledBehavior_NPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScheduledBehavior_NPC_Statics::NewProp_OwnerActivityComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_NPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScheduledBehavior_NPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UScheduledBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_NPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScheduledBehavior_NPC_Statics::ClassParams = {
	&UScheduledBehavior_NPC::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UScheduledBehavior_NPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_NPC_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_NPC_Statics::Class_MetaDataParams), Z_Construct_UClass_UScheduledBehavior_NPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScheduledBehavior_NPC()
{
	if (!Z_Registration_Info_UClass_UScheduledBehavior_NPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScheduledBehavior_NPC.OuterSingleton, Z_Construct_UClass_UScheduledBehavior_NPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScheduledBehavior_NPC.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UScheduledBehavior_NPC>()
{
	return UScheduledBehavior_NPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScheduledBehavior_NPC);
UScheduledBehavior_NPC::~UScheduledBehavior_NPC() {}
// End Class UScheduledBehavior_NPC

// Begin Class UScheduledBehavior_AddNPCGoal Function ProvideGoal
struct ScheduledBehavior_AddNPCGoal_eventProvideGoal_Parms
{
	UNPCGoalItem* ReturnValue;

	/** Constructor, initializes return property only **/
	ScheduledBehavior_AddNPCGoal_eventProvideGoal_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UScheduledBehavior_AddNPCGoal_ProvideGoal = FName(TEXT("ProvideGoal"));
UNPCGoalItem* UScheduledBehavior_AddNPCGoal::ProvideGoal() const
{
	UFunction* Func = FindFunctionChecked(NAME_UScheduledBehavior_AddNPCGoal_ProvideGoal);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ScheduledBehavior_AddNPCGoal_eventProvideGoal_Parms Parms;
		const_cast<UScheduledBehavior_AddNPCGoal*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UScheduledBehavior_AddNPCGoal*>(this)->ProvideGoal_Implementation();
	}
}
struct Z_Construct_UFunction_UScheduledBehavior_AddNPCGoal_ProvideGoal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Goals" },
		{ "Comment", "//Construct and provide the goal \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivitySchedule.h" },
		{ "ToolTip", "Construct and provide the goal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScheduledBehavior_AddNPCGoal_ProvideGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScheduledBehavior_AddNPCGoal_eventProvideGoal_Parms, ReturnValue), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScheduledBehavior_AddNPCGoal_ProvideGoal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_AddNPCGoal_ProvideGoal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_AddNPCGoal_ProvideGoal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScheduledBehavior_AddNPCGoal_ProvideGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScheduledBehavior_AddNPCGoal, nullptr, "ProvideGoal", nullptr, nullptr, Z_Construct_UFunction_UScheduledBehavior_AddNPCGoal_ProvideGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_AddNPCGoal_ProvideGoal_Statics::PropPointers), sizeof(ScheduledBehavior_AddNPCGoal_eventProvideGoal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_AddNPCGoal_ProvideGoal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScheduledBehavior_AddNPCGoal_ProvideGoal_Statics::Function_MetaDataParams) };
static_assert(sizeof(ScheduledBehavior_AddNPCGoal_eventProvideGoal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScheduledBehavior_AddNPCGoal_ProvideGoal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScheduledBehavior_AddNPCGoal_ProvideGoal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScheduledBehavior_AddNPCGoal::execProvideGoal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNPCGoalItem**)Z_Param__Result=P_THIS->ProvideGoal_Implementation();
	P_NATIVE_END;
}
// End Class UScheduledBehavior_AddNPCGoal Function ProvideGoal

// Begin Class UScheduledBehavior_AddNPCGoal
void UScheduledBehavior_AddNPCGoal::StaticRegisterNativesUScheduledBehavior_AddNPCGoal()
{
	UClass* Class = UScheduledBehavior_AddNPCGoal::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ProvideGoal", &UScheduledBehavior_AddNPCGoal::execProvideGoal },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScheduledBehavior_AddNPCGoal);
UClass* Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_NoRegister()
{
	return UScheduledBehavior_AddNPCGoal::StaticClass();
}
struct Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UScheduledBehavior_AddNPCGoals create a goal and add it at the specified time. They then track it, and remove it at the EndTime. \n */" },
		{ "IncludePath", "AI/Activities/NPCActivitySchedule.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivitySchedule.h" },
		{ "ToolTip", "UScheduledBehavior_AddNPCGoals create a goal and add it at the specified time. They then track it, and remove it at the EndTime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGoal_MetaData[] = {
		{ "Category", "Scheduled Behavior - Add NPC Goal" },
		{ "Comment", "//Pointer to the goal we created so we can remove when behavior ends \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivitySchedule.h" },
		{ "ToolTip", "Pointer to the goal we created so we can remove when behavior ends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreOverride_MetaData[] = {
		{ "Category", "Scheduled Behavior - Add NPC Goal" },
		{ "Comment", "//If > 0, we'll assign this score to the created goal. Otherwise we'll use the created goals score. \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivitySchedule.h" },
		{ "ToolTip", "If > 0, we'll assign this score to the created goal. Otherwise we'll use the created goals score." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReselect_MetaData[] = {
		{ "Category", "Scheduled Behavior - Add NPC Goal" },
		{ "Comment", "//Do we want a reselect\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivitySchedule.h" },
		{ "ToolTip", "Do we want a reselect" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveGoal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScoreOverride;
	static void NewProp_bReselect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReselect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UScheduledBehavior_AddNPCGoal_ProvideGoal, "ProvideGoal" }, // 2328941979
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScheduledBehavior_AddNPCGoal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::NewProp_ActiveGoal = { "ActiveGoal", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScheduledBehavior_AddNPCGoal, ActiveGoal), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGoal_MetaData), NewProp_ActiveGoal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::NewProp_ScoreOverride = { "ScoreOverride", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScheduledBehavior_AddNPCGoal, ScoreOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreOverride_MetaData), NewProp_ScoreOverride_MetaData) };
void Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::NewProp_bReselect_SetBit(void* Obj)
{
	((UScheduledBehavior_AddNPCGoal*)Obj)->bReselect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::NewProp_bReselect = { "bReselect", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScheduledBehavior_AddNPCGoal), &Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::NewProp_bReselect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReselect_MetaData), NewProp_bReselect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::NewProp_ActiveGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::NewProp_ScoreOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::NewProp_bReselect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UScheduledBehavior_NPC,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::ClassParams = {
	&UScheduledBehavior_AddNPCGoal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::PropPointers),
	0,
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::Class_MetaDataParams), Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScheduledBehavior_AddNPCGoal()
{
	if (!Z_Registration_Info_UClass_UScheduledBehavior_AddNPCGoal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScheduledBehavior_AddNPCGoal.OuterSingleton, Z_Construct_UClass_UScheduledBehavior_AddNPCGoal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScheduledBehavior_AddNPCGoal.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UScheduledBehavior_AddNPCGoal>()
{
	return UScheduledBehavior_AddNPCGoal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScheduledBehavior_AddNPCGoal);
UScheduledBehavior_AddNPCGoal::~UScheduledBehavior_AddNPCGoal() {}
// End Class UScheduledBehavior_AddNPCGoal

// Begin Class UNPCActivitySchedule
void UNPCActivitySchedule::StaticRegisterNativesUNPCActivitySchedule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCActivitySchedule);
UClass* Z_Construct_UClass_UNPCActivitySchedule_NoRegister()
{
	return UNPCActivitySchedule::StaticClass();
}
struct Z_Construct_UClass_UNPCActivitySchedule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains a list of activites that an NPC should do throughout the day. \n */" },
		{ "IncludePath", "AI/Activities/NPCActivitySchedule.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivitySchedule.h" },
		{ "ToolTip", "Contains a list of activites that an NPC should do throughout the day." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Activities_Inner_MetaData[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//The activities to perform should go in here. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivitySchedule.h" },
		{ "ToolTip", "The activities to perform should go in here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Activities_MetaData[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//The activities to perform should go in here. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivitySchedule.h" },
		{ "ToolTip", "The activities to perform should go in here." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Activities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Activities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCActivitySchedule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivitySchedule_Statics::NewProp_Activities_Inner = { "Activities", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UScheduledBehavior_NPC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Activities_Inner_MetaData), NewProp_Activities_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPCActivitySchedule_Statics::NewProp_Activities = { "Activities", nullptr, (EPropertyFlags)0x011400800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivitySchedule, Activities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Activities_MetaData), NewProp_Activities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCActivitySchedule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivitySchedule_Statics::NewProp_Activities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivitySchedule_Statics::NewProp_Activities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivitySchedule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCActivitySchedule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivitySchedule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCActivitySchedule_Statics::ClassParams = {
	&UNPCActivitySchedule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNPCActivitySchedule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivitySchedule_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivitySchedule_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCActivitySchedule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCActivitySchedule()
{
	if (!Z_Registration_Info_UClass_UNPCActivitySchedule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCActivitySchedule.OuterSingleton, Z_Construct_UClass_UNPCActivitySchedule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCActivitySchedule.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNPCActivitySchedule>()
{
	return UNPCActivitySchedule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCActivitySchedule);
UNPCActivitySchedule::~UNPCActivitySchedule() {}
// End Class UNPCActivitySchedule

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivitySchedule_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScheduledBehavior_NPC, UScheduledBehavior_NPC::StaticClass, TEXT("UScheduledBehavior_NPC"), &Z_Registration_Info_UClass_UScheduledBehavior_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScheduledBehavior_NPC), 1595569847U) },
		{ Z_Construct_UClass_UScheduledBehavior_AddNPCGoal, UScheduledBehavior_AddNPCGoal::StaticClass, TEXT("UScheduledBehavior_AddNPCGoal"), &Z_Registration_Info_UClass_UScheduledBehavior_AddNPCGoal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScheduledBehavior_AddNPCGoal), 2157052113U) },
		{ Z_Construct_UClass_UNPCActivitySchedule, UNPCActivitySchedule::StaticClass, TEXT("UNPCActivitySchedule"), &Z_Registration_Info_UClass_UNPCActivitySchedule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCActivitySchedule), 273467091U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivitySchedule_h_1613359760(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivitySchedule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivitySchedule_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
