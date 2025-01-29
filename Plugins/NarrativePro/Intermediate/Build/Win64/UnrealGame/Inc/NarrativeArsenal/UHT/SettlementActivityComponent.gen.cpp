// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Settlements/Activities/SettlementActivityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettlementActivityComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ASettlement_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UScheduledBehavior_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USettlementActivity_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USettlementActivityComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USettlementActivityComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USettlementActivitySchedule_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class USettlementActivityComponent Function RunActivity
struct Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics
{
	struct SettlementActivityComponent_eventRunActivity_Parms
	{
		USettlementActivity* SettlementActivity;
		USettlementActivity* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activities" },
		{ "Comment", "/**Run an activity from the specified template. Also contains a context struct to see why the activity was ran. */" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivityComponent.h" },
		{ "ToolTip", "Run an activity from the specified template. Also contains a context struct to see why the activity was ran." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettlementActivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics::NewProp_SettlementActivity = { "SettlementActivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettlementActivityComponent_eventRunActivity_Parms, SettlementActivity), Z_Construct_UClass_USettlementActivity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettlementActivityComponent_eventRunActivity_Parms, ReturnValue), Z_Construct_UClass_USettlementActivity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics::NewProp_SettlementActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettlementActivityComponent, nullptr, "RunActivity", nullptr, nullptr, Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics::SettlementActivityComponent_eventRunActivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics::SettlementActivityComponent_eventRunActivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettlementActivityComponent_RunActivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettlementActivityComponent_RunActivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettlementActivityComponent::execRunActivity)
{
	P_GET_OBJECT(USettlementActivity,Z_Param_SettlementActivity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USettlementActivity**)Z_Param__Result=P_THIS->RunActivity(Z_Param_SettlementActivity);
	P_NATIVE_END;
}
// End Class USettlementActivityComponent Function RunActivity

// Begin Class USettlementActivityComponent Function SetActivitySchedule
struct Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule_Statics
{
	struct SettlementActivityComponent_eventSetActivitySchedule_Parms
	{
		USettlementActivitySchedule* Schedule;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activities" },
		{ "Comment", "//Set our settlements activity schedule \n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivityComponent.h" },
		{ "ToolTip", "Set our settlements activity schedule" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Schedule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule_Statics::NewProp_Schedule = { "Schedule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettlementActivityComponent_eventSetActivitySchedule_Parms, Schedule), Z_Construct_UClass_USettlementActivitySchedule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule_Statics::NewProp_Schedule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettlementActivityComponent, nullptr, "SetActivitySchedule", nullptr, nullptr, Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule_Statics::SettlementActivityComponent_eventSetActivitySchedule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule_Statics::SettlementActivityComponent_eventSetActivitySchedule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettlementActivityComponent::execSetActivitySchedule)
{
	P_GET_OBJECT(USettlementActivitySchedule,Z_Param_Schedule);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActivitySchedule(Z_Param_Schedule);
	P_NATIVE_END;
}
// End Class USettlementActivityComponent Function SetActivitySchedule

// Begin Class USettlementActivityComponent Function StopActivity
struct Z_Construct_UFunction_USettlementActivityComponent_StopActivity_Statics
{
	struct SettlementActivityComponent_eventStopActivity_Parms
	{
		USettlementActivity* ActivityToStop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activities" },
		{ "Comment", "//Stop one of our currently running activities\n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivityComponent.h" },
		{ "ToolTip", "Stop one of our currently running activities" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityToStop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettlementActivityComponent_StopActivity_Statics::NewProp_ActivityToStop = { "ActivityToStop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettlementActivityComponent_eventStopActivity_Parms, ActivityToStop), Z_Construct_UClass_USettlementActivity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettlementActivityComponent_StopActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettlementActivityComponent_StopActivity_Statics::NewProp_ActivityToStop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettlementActivityComponent_StopActivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettlementActivityComponent_StopActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettlementActivityComponent, nullptr, "StopActivity", nullptr, nullptr, Z_Construct_UFunction_USettlementActivityComponent_StopActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettlementActivityComponent_StopActivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettlementActivityComponent_StopActivity_Statics::SettlementActivityComponent_eventStopActivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettlementActivityComponent_StopActivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettlementActivityComponent_StopActivity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettlementActivityComponent_StopActivity_Statics::SettlementActivityComponent_eventStopActivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettlementActivityComponent_StopActivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettlementActivityComponent_StopActivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettlementActivityComponent::execStopActivity)
{
	P_GET_OBJECT(USettlementActivity,Z_Param_ActivityToStop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopActivity(Z_Param_ActivityToStop);
	P_NATIVE_END;
}
// End Class USettlementActivityComponent Function StopActivity

// Begin Class USettlementActivityComponent
void USettlementActivityComponent::StaticRegisterNativesUSettlementActivityComponent()
{
	UClass* Class = USettlementActivityComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RunActivity", &USettlementActivityComponent::execRunActivity },
		{ "SetActivitySchedule", &USettlementActivityComponent::execSetActivitySchedule },
		{ "StopActivity", &USettlementActivityComponent::execStopActivity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettlementActivityComponent);
UClass* Z_Construct_UClass_USettlementActivityComponent_NoRegister()
{
	return USettlementActivityComponent::StaticClass();
}
struct Z_Construct_UClass_USettlementActivityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "IncludePath", "Settlements/Activities/SettlementActivityComponent.h" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerSettlement_MetaData[] = {
		{ "Category", "Activities" },
		{ "Comment", "//Our settlement, cached. We may want to store this on the settlementloader instead which would make this component even more lightweight. \n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivityComponent.h" },
		{ "ToolTip", "Our settlement, cached. We may want to store this on the settlementloader instead which would make this component even more lightweight." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActivities_MetaData[] = {
		{ "Comment", "//Activities the settlement is currently running\n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivityComponent.h" },
		{ "ToolTip", "Activities the settlement is currently running" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivitySchedule_MetaData[] = {
		{ "Category", "Activities" },
		{ "Comment", "//Our scheduled activities go in here. \n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivityComponent.h" },
		{ "ToolTip", "Our scheduled activities go in here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveScheduledActivites_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerSettlement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentActivities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentActivities;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivitySchedule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveScheduledActivites_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveScheduledActivites;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USettlementActivityComponent_RunActivity, "RunActivity" }, // 3207439771
		{ &Z_Construct_UFunction_USettlementActivityComponent_SetActivitySchedule, "SetActivitySchedule" }, // 3013735760
		{ &Z_Construct_UFunction_USettlementActivityComponent_StopActivity, "StopActivity" }, // 1573151336
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettlementActivityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettlementActivityComponent_Statics::NewProp_OwnerSettlement = { "OwnerSettlement", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettlementActivityComponent, OwnerSettlement), Z_Construct_UClass_ASettlement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerSettlement_MetaData), NewProp_OwnerSettlement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettlementActivityComponent_Statics::NewProp_CurrentActivities_Inner = { "CurrentActivities", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USettlementActivity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USettlementActivityComponent_Statics::NewProp_CurrentActivities = { "CurrentActivities", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettlementActivityComponent, CurrentActivities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActivities_MetaData), NewProp_CurrentActivities_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettlementActivityComponent_Statics::NewProp_ActivitySchedule = { "ActivitySchedule", nullptr, (EPropertyFlags)0x0124080001010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettlementActivityComponent, ActivitySchedule), Z_Construct_UClass_USettlementActivitySchedule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivitySchedule_MetaData), NewProp_ActivitySchedule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettlementActivityComponent_Statics::NewProp_ActiveScheduledActivites_Inner = { "ActiveScheduledActivites", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UScheduledBehavior_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USettlementActivityComponent_Statics::NewProp_ActiveScheduledActivites = { "ActiveScheduledActivites", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettlementActivityComponent, ActiveScheduledActivites), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveScheduledActivites_MetaData), NewProp_ActiveScheduledActivites_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettlementActivityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementActivityComponent_Statics::NewProp_OwnerSettlement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementActivityComponent_Statics::NewProp_CurrentActivities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementActivityComponent_Statics::NewProp_CurrentActivities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementActivityComponent_Statics::NewProp_ActivitySchedule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementActivityComponent_Statics::NewProp_ActiveScheduledActivites_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementActivityComponent_Statics::NewProp_ActiveScheduledActivites,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettlementActivityComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USettlementActivityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettlementActivityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettlementActivityComponent_Statics::ClassParams = {
	&USettlementActivityComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USettlementActivityComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USettlementActivityComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettlementActivityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USettlementActivityComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettlementActivityComponent()
{
	if (!Z_Registration_Info_UClass_USettlementActivityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettlementActivityComponent.OuterSingleton, Z_Construct_UClass_USettlementActivityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettlementActivityComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<USettlementActivityComponent>()
{
	return USettlementActivityComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettlementActivityComponent);
USettlementActivityComponent::~USettlementActivityComponent() {}
// End Class USettlementActivityComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivityComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettlementActivityComponent, USettlementActivityComponent::StaticClass, TEXT("USettlementActivityComponent"), &Z_Registration_Info_UClass_USettlementActivityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettlementActivityComponent), 3703973578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivityComponent_h_3686638893(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivityComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
