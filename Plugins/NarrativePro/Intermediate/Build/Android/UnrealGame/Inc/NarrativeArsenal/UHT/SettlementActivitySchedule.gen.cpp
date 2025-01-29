// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Settlements/Activities/SettlementActivitySchedule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettlementActivitySchedule() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ASettlement_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UScheduledBehavior();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UScheduledBehavior_Settlement();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UScheduledBehavior_Settlement_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USettlementActivity_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USettlementActivitySchedule();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USettlementActivitySchedule_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FSettlementScheduledActivity();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FSettlementScheduledActivity
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SettlementScheduledActivity;
class UScriptStruct* FSettlementScheduledActivity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SettlementScheduledActivity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SettlementScheduledActivity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSettlementScheduledActivity, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("SettlementScheduledActivity"));
	}
	return Z_Registration_Info_UScriptStruct_SettlementScheduledActivity.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FSettlementScheduledActivity>()
{
	return FSettlementScheduledActivity::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivitySchedule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Scheduled Activity" },
		{ "ClampMax", "2400" },
		{ "ClampMin", "0" },
		{ "Comment", "//When the activity starts and ends \n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivitySchedule.h" },
		{ "ToolTip", "When the activity starts and ends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "Category", "Scheduled Activity" },
		{ "ClampMax", "2400" },
		{ "ClampMin", "0" },
		{ "Comment", "//When the activity ends \n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivitySchedule.h" },
		{ "ToolTip", "When the activity ends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettlementActivityTemplate_MetaData[] = {
		{ "Category", "Scheduled Activity" },
		{ "Comment", "//The settlement activity to run at the specified time \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivitySchedule.h" },
		{ "ToolTip", "The settlement activity to run at the specified time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettlementActivityTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSettlementScheduledActivity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSettlementScheduledActivity, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSettlementScheduledActivity, EndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTime_MetaData), NewProp_EndTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::NewProp_SettlementActivityTemplate = { "SettlementActivityTemplate", nullptr, (EPropertyFlags)0x011600000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSettlementScheduledActivity, SettlementActivityTemplate), Z_Construct_UClass_USettlementActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettlementActivityTemplate_MetaData), NewProp_SettlementActivityTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::NewProp_SettlementActivityTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"SettlementScheduledActivity",
	Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::PropPointers),
	sizeof(FSettlementScheduledActivity),
	alignof(FSettlementScheduledActivity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSettlementScheduledActivity()
{
	if (!Z_Registration_Info_UScriptStruct_SettlementScheduledActivity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SettlementScheduledActivity.InnerSingleton, Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SettlementScheduledActivity.InnerSingleton;
}
// End ScriptStruct FSettlementScheduledActivity

// Begin Class UScheduledBehavior_Settlement
void UScheduledBehavior_Settlement::StaticRegisterNativesUScheduledBehavior_Settlement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScheduledBehavior_Settlement);
UClass* Z_Construct_UClass_UScheduledBehavior_Settlement_NoRegister()
{
	return UScheduledBehavior_Settlement::StaticClass();
}
struct Z_Construct_UClass_UScheduledBehavior_Settlement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "//A scheduled behavior owned by a settlememt\n" },
		{ "IncludePath", "Settlements/Activities/SettlementActivitySchedule.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivitySchedule.h" },
		{ "ToolTip", "A scheduled behavior owned by a settlememt" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerSettlement_MetaData[] = {
		{ "Comment", "//The component that owns this scheduled behavior \n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivitySchedule.h" },
		{ "ToolTip", "The component that owns this scheduled behavior" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerSettlement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScheduledBehavior_Settlement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScheduledBehavior_Settlement_Statics::NewProp_OwnerSettlement = { "OwnerSettlement", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScheduledBehavior_Settlement, OwnerSettlement), Z_Construct_UClass_ASettlement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerSettlement_MetaData), NewProp_OwnerSettlement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScheduledBehavior_Settlement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScheduledBehavior_Settlement_Statics::NewProp_OwnerSettlement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_Settlement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScheduledBehavior_Settlement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UScheduledBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_Settlement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScheduledBehavior_Settlement_Statics::ClassParams = {
	&UScheduledBehavior_Settlement::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UScheduledBehavior_Settlement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_Settlement_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_Settlement_Statics::Class_MetaDataParams), Z_Construct_UClass_UScheduledBehavior_Settlement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScheduledBehavior_Settlement()
{
	if (!Z_Registration_Info_UClass_UScheduledBehavior_Settlement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScheduledBehavior_Settlement.OuterSingleton, Z_Construct_UClass_UScheduledBehavior_Settlement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScheduledBehavior_Settlement.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UScheduledBehavior_Settlement>()
{
	return UScheduledBehavior_Settlement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScheduledBehavior_Settlement);
UScheduledBehavior_Settlement::~UScheduledBehavior_Settlement() {}
// End Class UScheduledBehavior_Settlement

// Begin Class UScheduledBehavior_RunSettlementActivity
void UScheduledBehavior_RunSettlementActivity::StaticRegisterNativesUScheduledBehavior_RunSettlementActivity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScheduledBehavior_RunSettlementActivity);
UClass* Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_NoRegister()
{
	return UScheduledBehavior_RunSettlementActivity::StaticClass();
}
struct Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default Default Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tries adding a settlement activity at the given time, removes when done. \n */" },
		{ "IncludePath", "Settlements/Activities/SettlementActivitySchedule.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivitySchedule.h" },
		{ "ToolTip", "Tries adding a settlement activity at the given time, removes when done." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityTemplate_MetaData[] = {
		{ "Category", "Scheduled Behavior - Add Settlement Goal" },
		{ "Comment", "//The template we'll use to construct the activity\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivitySchedule.h" },
		{ "ToolTip", "The template we'll use to construct the activity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveActivity_MetaData[] = {
		{ "Category", "Scheduled Behavior - Add Settlement Goal" },
		{ "Comment", "//Pointer to the settlement activity we've started so we can stop it later \n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivitySchedule.h" },
		{ "ToolTip", "Pointer to the settlement activity we've started so we can stop it later" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreOverride_MetaData[] = {
		{ "Category", "Scheduled Behavior - Add Settlement Goal" },
		{ "Comment", "//If > 0, we'll assign this score to the created goal. Otherwise we'll use the created goals score. \n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivitySchedule.h" },
		{ "ToolTip", "If > 0, we'll assign this score to the created goal. Otherwise we'll use the created goals score." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReselect_MetaData[] = {
		{ "Category", "Scheduled Behavior - Add Settlement Goal" },
		{ "Comment", "//Do we want a reselect\n" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivitySchedule.h" },
		{ "ToolTip", "Do we want a reselect" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityTemplate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveActivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScoreOverride;
	static void NewProp_bReselect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReselect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScheduledBehavior_RunSettlementActivity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::NewProp_ActivityTemplate = { "ActivityTemplate", nullptr, (EPropertyFlags)0x0022080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScheduledBehavior_RunSettlementActivity, ActivityTemplate), Z_Construct_UClass_USettlementActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityTemplate_MetaData), NewProp_ActivityTemplate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::NewProp_ActiveActivity = { "ActiveActivity", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScheduledBehavior_RunSettlementActivity, ActiveActivity), Z_Construct_UClass_USettlementActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveActivity_MetaData), NewProp_ActiveActivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::NewProp_ScoreOverride = { "ScoreOverride", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScheduledBehavior_RunSettlementActivity, ScoreOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreOverride_MetaData), NewProp_ScoreOverride_MetaData) };
void Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::NewProp_bReselect_SetBit(void* Obj)
{
	((UScheduledBehavior_RunSettlementActivity*)Obj)->bReselect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::NewProp_bReselect = { "bReselect", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScheduledBehavior_RunSettlementActivity), &Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::NewProp_bReselect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReselect_MetaData), NewProp_bReselect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::NewProp_ActivityTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::NewProp_ActiveActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::NewProp_ScoreOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::NewProp_bReselect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UScheduledBehavior_Settlement,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::ClassParams = {
	&UScheduledBehavior_RunSettlementActivity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::Class_MetaDataParams), Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity()
{
	if (!Z_Registration_Info_UClass_UScheduledBehavior_RunSettlementActivity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScheduledBehavior_RunSettlementActivity.OuterSingleton, Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScheduledBehavior_RunSettlementActivity.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UScheduledBehavior_RunSettlementActivity>()
{
	return UScheduledBehavior_RunSettlementActivity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScheduledBehavior_RunSettlementActivity);
UScheduledBehavior_RunSettlementActivity::~UScheduledBehavior_RunSettlementActivity() {}
// End Class UScheduledBehavior_RunSettlementActivity

// Begin Class USettlementActivitySchedule
void USettlementActivitySchedule::StaticRegisterNativesUSettlementActivitySchedule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettlementActivitySchedule);
UClass* Z_Construct_UClass_USettlementActivitySchedule_NoRegister()
{
	return USettlementActivitySchedule::StaticClass();
}
struct Z_Construct_UClass_USettlementActivitySchedule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a list of events to execute that effect the settlement throughout the day. \n */" },
		{ "IncludePath", "Settlements/Activities/SettlementActivitySchedule.h" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivitySchedule.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Holds a list of events to execute that effect the settlement throughout the day." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScheduledActivities_Inner_MetaData[] = {
		{ "Category", "Scheduled Activity" },
		{ "Comment", "//The activities the settlement should run \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivitySchedule.h" },
		{ "ToolTip", "The activities the settlement should run" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScheduledActivities_MetaData[] = {
		{ "Category", "Scheduled Activity" },
		{ "Comment", "//The activities the settlement should run \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Activities/SettlementActivitySchedule.h" },
		{ "ToolTip", "The activities the settlement should run" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScheduledActivities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScheduledActivities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettlementActivitySchedule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettlementActivitySchedule_Statics::NewProp_ScheduledActivities_Inner = { "ScheduledActivities", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UScheduledBehavior_Settlement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScheduledActivities_Inner_MetaData), NewProp_ScheduledActivities_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USettlementActivitySchedule_Statics::NewProp_ScheduledActivities = { "ScheduledActivities", nullptr, (EPropertyFlags)0x011400800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettlementActivitySchedule, ScheduledActivities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScheduledActivities_MetaData), NewProp_ScheduledActivities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettlementActivitySchedule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementActivitySchedule_Statics::NewProp_ScheduledActivities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementActivitySchedule_Statics::NewProp_ScheduledActivities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettlementActivitySchedule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USettlementActivitySchedule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettlementActivitySchedule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettlementActivitySchedule_Statics::ClassParams = {
	&USettlementActivitySchedule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USettlementActivitySchedule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USettlementActivitySchedule_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettlementActivitySchedule_Statics::Class_MetaDataParams), Z_Construct_UClass_USettlementActivitySchedule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettlementActivitySchedule()
{
	if (!Z_Registration_Info_UClass_USettlementActivitySchedule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettlementActivitySchedule.OuterSingleton, Z_Construct_UClass_USettlementActivitySchedule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettlementActivitySchedule.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<USettlementActivitySchedule>()
{
	return USettlementActivitySchedule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettlementActivitySchedule);
USettlementActivitySchedule::~USettlementActivitySchedule() {}
// End Class USettlementActivitySchedule

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivitySchedule_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSettlementScheduledActivity::StaticStruct, Z_Construct_UScriptStruct_FSettlementScheduledActivity_Statics::NewStructOps, TEXT("SettlementScheduledActivity"), &Z_Registration_Info_UScriptStruct_SettlementScheduledActivity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSettlementScheduledActivity), 3716618778U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScheduledBehavior_Settlement, UScheduledBehavior_Settlement::StaticClass, TEXT("UScheduledBehavior_Settlement"), &Z_Registration_Info_UClass_UScheduledBehavior_Settlement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScheduledBehavior_Settlement), 3511412736U) },
		{ Z_Construct_UClass_UScheduledBehavior_RunSettlementActivity, UScheduledBehavior_RunSettlementActivity::StaticClass, TEXT("UScheduledBehavior_RunSettlementActivity"), &Z_Registration_Info_UClass_UScheduledBehavior_RunSettlementActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScheduledBehavior_RunSettlementActivity), 1597614129U) },
		{ Z_Construct_UClass_USettlementActivitySchedule, USettlementActivitySchedule::StaticClass, TEXT("USettlementActivitySchedule"), &Z_Registration_Info_UClass_USettlementActivitySchedule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettlementActivitySchedule), 3440643120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivitySchedule_h_1729057214(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivitySchedule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivitySchedule_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivitySchedule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Activities_SettlementActivitySchedule_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
