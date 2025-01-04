// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeSettlement/Public/NPCBehaviourComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCBehaviourComponent() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableComponent_NoRegister();
NARRATIVESETTLEMENT_API UClass* Z_Construct_UClass_UNPCActivity_NoRegister();
NARRATIVESETTLEMENT_API UClass* Z_Construct_UClass_UNPCBehaviourComponent();
NARRATIVESETTLEMENT_API UClass* Z_Construct_UClass_UNPCBehaviourComponent_NoRegister();
NARRATIVESETTLEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FScheduledActivity();
UPackage* Z_Construct_UPackage__Script_NarrativeSettlement();
// End Cross Module References

// Begin ScriptStruct FScheduledActivity
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScheduledActivity;
class UScriptStruct* FScheduledActivity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScheduledActivity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScheduledActivity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScheduledActivity, (UObject*)Z_Construct_UPackage__Script_NarrativeSettlement(), TEXT("ScheduledActivity"));
	}
	return Z_Registration_Info_UScriptStruct_ScheduledActivity.OuterSingleton;
}
template<> NARRATIVESETTLEMENT_API UScriptStruct* StaticStruct<FScheduledActivity>()
{
	return FScheduledActivity::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScheduledActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**Holds a time that an activity will be performed at, as well as the activity itself  */" },
		{ "ModuleRelativePath", "Public/NPCBehaviourComponent.h" },
		{ "ToolTip", "Holds a time that an activity will be performed at, as well as the activity itself" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Scheduled Activity" },
		{ "Comment", "//The time the activity should be performed at\n" },
		{ "ModuleRelativePath", "Public/NPCBehaviourComponent.h" },
		{ "ToolTip", "The time the activity should be performed at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Activity_MetaData[] = {
		{ "Category", "Scheduled Activity" },
		{ "Comment", "//The activity to be performed \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NPCBehaviourComponent.h" },
		{ "ToolTip", "The activity to be performed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Activity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScheduledActivity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScheduledActivity_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScheduledActivity, Time), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FScheduledActivity_Statics::NewProp_Activity = { "Activity", nullptr, (EPropertyFlags)0x0012000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScheduledActivity, Activity), Z_Construct_UClass_UNPCActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Activity_MetaData), NewProp_Activity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScheduledActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScheduledActivity_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScheduledActivity_Statics::NewProp_Activity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScheduledActivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScheduledActivity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeSettlement,
	nullptr,
	&NewStructOps,
	"ScheduledActivity",
	Z_Construct_UScriptStruct_FScheduledActivity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScheduledActivity_Statics::PropPointers),
	sizeof(FScheduledActivity),
	alignof(FScheduledActivity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScheduledActivity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScheduledActivity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScheduledActivity()
{
	if (!Z_Registration_Info_UScriptStruct_ScheduledActivity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScheduledActivity.InnerSingleton, Z_Construct_UScriptStruct_FScheduledActivity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScheduledActivity.InnerSingleton;
}
// End ScriptStruct FScheduledActivity

// Begin Class UNPCBehaviourComponent Function BeginActivity
struct Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics
{
	struct NPCBehaviourComponent_eventBeginActivity_Parms
	{
		UNPCActivity* NewActivity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activities" },
		{ "ModuleRelativePath", "Public/NPCBehaviourComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActivity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::NewProp_NewActivity = { "NewActivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCBehaviourComponent_eventBeginActivity_Parms, NewActivity), Z_Construct_UClass_UNPCActivity_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NPCBehaviourComponent_eventBeginActivity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NPCBehaviourComponent_eventBeginActivity_Parms), &Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::NewProp_NewActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCBehaviourComponent, nullptr, "BeginActivity", nullptr, nullptr, Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::NPCBehaviourComponent_eventBeginActivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::NPCBehaviourComponent_eventBeginActivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCBehaviourComponent::execBeginActivity)
{
	P_GET_OBJECT(UNPCActivity,Z_Param_NewActivity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BeginActivity(Z_Param_NewActivity);
	P_NATIVE_END;
}
// End Class UNPCBehaviourComponent Function BeginActivity

// Begin Class UNPCBehaviourComponent
void UNPCBehaviourComponent::StaticRegisterNativesUNPCBehaviourComponent()
{
	UClass* Class = UNPCBehaviourComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginActivity", &UNPCBehaviourComponent::execBeginActivity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCBehaviourComponent);
UClass* Z_Construct_UClass_UNPCBehaviourComponent_NoRegister()
{
	return UNPCBehaviourComponent::StaticClass();
}
struct Z_Construct_UClass_UNPCBehaviourComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**When added to an AIController, this component will take control of the AIControllers\nBehaviour tree using the NPCActivity */" },
		{ "IncludePath", "NPCBehaviourComponent.h" },
		{ "ModuleRelativePath", "Public/NPCBehaviourComponent.h" },
		{ "ToolTip", "When added to an AIController, this component will take control of the AIControllers\nBehaviour tree using the NPCActivity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScheduledActivities_MetaData[] = {
		{ "Category", "Activities" },
		{ "Comment", "//The activities we have scheduled\n" },
		{ "ModuleRelativePath", "Public/NPCBehaviourComponent.h" },
		{ "ToolTip", "The activities we have scheduled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActivity_MetaData[] = {
		{ "Category", "Activities" },
		{ "Comment", "//The activity we're currently running\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NPCBehaviourComponent.h" },
		{ "ToolTip", "The activity we're currently running" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAIC_MetaData[] = {
		{ "Comment", "//The AI controller we're attached to \n" },
		{ "ModuleRelativePath", "Public/NPCBehaviourComponent.h" },
		{ "ToolTip", "The AI controller we're attached to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScheduledActivities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScheduledActivities;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentActivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerAIC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNPCBehaviourComponent_BeginActivity, "BeginActivity" }, // 2730130565
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCBehaviourComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPCBehaviourComponent_Statics::NewProp_ScheduledActivities_Inner = { "ScheduledActivities", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FScheduledActivity, METADATA_PARAMS(0, nullptr) }; // 4078125279
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPCBehaviourComponent_Statics::NewProp_ScheduledActivities = { "ScheduledActivities", nullptr, (EPropertyFlags)0x0020088000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCBehaviourComponent, ScheduledActivities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScheduledActivities_MetaData), NewProp_ScheduledActivities_MetaData) }; // 4078125279
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCBehaviourComponent_Statics::NewProp_CurrentActivity = { "CurrentActivity", nullptr, (EPropertyFlags)0x0022080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCBehaviourComponent, CurrentActivity), Z_Construct_UClass_UNPCActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActivity_MetaData), NewProp_CurrentActivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCBehaviourComponent_Statics::NewProp_OwnerAIC = { "OwnerAIC", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCBehaviourComponent, OwnerAIC), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerAIC_MetaData), NewProp_OwnerAIC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCBehaviourComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCBehaviourComponent_Statics::NewProp_ScheduledActivities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCBehaviourComponent_Statics::NewProp_ScheduledActivities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCBehaviourComponent_Statics::NewProp_CurrentActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCBehaviourComponent_Statics::NewProp_OwnerAIC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCBehaviourComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCBehaviourComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeSettlement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCBehaviourComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNPCBehaviourComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableComponent_NoRegister, (int32)VTABLE_OFFSET(UNPCBehaviourComponent, INarrativeSavableComponent), false },  // 1573843113
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCBehaviourComponent_Statics::ClassParams = {
	&UNPCBehaviourComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNPCBehaviourComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCBehaviourComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCBehaviourComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCBehaviourComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCBehaviourComponent()
{
	if (!Z_Registration_Info_UClass_UNPCBehaviourComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCBehaviourComponent.OuterSingleton, Z_Construct_UClass_UNPCBehaviourComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCBehaviourComponent.OuterSingleton;
}
template<> NARRATIVESETTLEMENT_API UClass* StaticClass<UNPCBehaviourComponent>()
{
	return UNPCBehaviourComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCBehaviourComponent);
UNPCBehaviourComponent::~UNPCBehaviourComponent() {}
// End Class UNPCBehaviourComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FScheduledActivity::StaticStruct, Z_Construct_UScriptStruct_FScheduledActivity_Statics::NewStructOps, TEXT("ScheduledActivity"), &Z_Registration_Info_UScriptStruct_ScheduledActivity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScheduledActivity), 4078125279U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPCBehaviourComponent, UNPCBehaviourComponent::StaticClass, TEXT("UNPCBehaviourComponent"), &Z_Registration_Info_UClass_UNPCBehaviourComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCBehaviourComponent), 794324147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_712477261(TEXT("/Script/NarrativeSettlement"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
