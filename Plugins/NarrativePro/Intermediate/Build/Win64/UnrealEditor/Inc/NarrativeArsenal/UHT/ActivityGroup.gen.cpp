// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/Activities/ActivityGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivityGroup() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UActivityGroup();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UActivityGroup_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivity_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UActivityGroup Function CanUseGroup
struct ActivityGroup_eventCanUseGroup_Parms
{
	FString FailReason;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ActivityGroup_eventCanUseGroup_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UActivityGroup_CanUseGroup = FName(TEXT("CanUseGroup"));
bool UActivityGroup::CanUseGroup(FString& FailReason) const
{
	UFunction* Func = FindFunctionChecked(NAME_UActivityGroup_CanUseGroup);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ActivityGroup_eventCanUseGroup_Parms Parms;
		Parms.FailReason=FailReason;
		const_cast<UActivityGroup*>(this)->ProcessEvent(Func,&Parms);
		FailReason=Parms.FailReason;
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UActivityGroup*>(this)->CanUseGroup_Implementation(FailReason);
	}
}
struct Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "/**Define whether or not this group is usable. can optionally use FailReason to define why it failed */" },
		{ "ModuleRelativePath", "Public/AI/Activities/ActivityGroup.h" },
		{ "ToolTip", "Define whether or not this group is usable. can optionally use FailReason to define why it failed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActivityGroup_eventCanUseGroup_Parms, FailReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActivityGroup_eventCanUseGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActivityGroup_eventCanUseGroup_Parms), &Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics::NewProp_FailReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityGroup, nullptr, "CanUseGroup", nullptr, nullptr, Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics::PropPointers), sizeof(ActivityGroup_eventCanUseGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(ActivityGroup_eventCanUseGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActivityGroup_CanUseGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActivityGroup_CanUseGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActivityGroup::execCanUseGroup)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FailReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanUseGroup_Implementation(Z_Param_Out_FailReason);
	P_NATIVE_END;
}
// End Class UActivityGroup Function CanUseGroup

// Begin Class UActivityGroup
void UActivityGroup::StaticRegisterNativesUActivityGroup()
{
	UClass* Class = UActivityGroup::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanUseGroup", &UActivityGroup::execCanUseGroup },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActivityGroup);
UClass* Z_Construct_UClass_UActivityGroup_NoRegister()
{
	return UActivityGroup::StaticClass();
}
struct Z_Construct_UClass_UActivityGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Groups activities so we can filter out invalid ones early \n */" },
		{ "IncludePath", "AI/Activities/ActivityGroup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/ActivityGroup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Groups activities so we can filter out invalid ones early" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[] = {
		{ "Category", "Activities" },
		{ "Comment", "//Our controller, cached\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/ActivityGroup.h" },
		{ "ToolTip", "Our controller, cached" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActivityComp_MetaData[] = {
		{ "Category", "Activities" },
		{ "Comment", "//Owner comp, cached\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/ActivityGroup.h" },
		{ "ToolTip", "Owner comp, cached" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subgroups_Inner_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//Subgroups of the group \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/ActivityGroup.h" },
		{ "ToolTip", "Subgroups of the group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subgroups_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//Subgroups of the group \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/ActivityGroup.h" },
		{ "ToolTip", "Subgroups of the group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupActivities_Inner_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//Activities in the group \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/ActivityGroup.h" },
		{ "ToolTip", "Activities in the group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupActivities_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//Activities in the group \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/ActivityGroup.h" },
		{ "ToolTip", "Activities in the group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActivityComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Subgroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Subgroups;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroupActivities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupActivities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivityGroup_CanUseGroup, "CanUseGroup" }, // 1193668175
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivityGroup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivityGroup_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivityGroup, OwnerController), Z_Construct_UClass_ANarrativeNPCController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerController_MetaData), NewProp_OwnerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivityGroup_Statics::NewProp_OwnerActivityComp = { "OwnerActivityComp", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivityGroup, OwnerActivityComp), Z_Construct_UClass_UNPCActivityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerActivityComp_MetaData), NewProp_OwnerActivityComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivityGroup_Statics::NewProp_Subgroups_Inner = { "Subgroups", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActivityGroup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subgroups_Inner_MetaData), NewProp_Subgroups_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActivityGroup_Statics::NewProp_Subgroups = { "Subgroups", nullptr, (EPropertyFlags)0x012408800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivityGroup, Subgroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subgroups_MetaData), NewProp_Subgroups_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivityGroup_Statics::NewProp_GroupActivities_Inner = { "GroupActivities", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNPCActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupActivities_Inner_MetaData), NewProp_GroupActivities_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActivityGroup_Statics::NewProp_GroupActivities = { "GroupActivities", nullptr, (EPropertyFlags)0x012408800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivityGroup, GroupActivities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupActivities_MetaData), NewProp_GroupActivities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivityGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivityGroup_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivityGroup_Statics::NewProp_OwnerActivityComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivityGroup_Statics::NewProp_Subgroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivityGroup_Statics::NewProp_Subgroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivityGroup_Statics::NewProp_GroupActivities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivityGroup_Statics::NewProp_GroupActivities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivityGroup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActivityGroup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivityGroup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivityGroup_Statics::ClassParams = {
	&UActivityGroup::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActivityGroup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActivityGroup_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivityGroup_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivityGroup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActivityGroup()
{
	if (!Z_Registration_Info_UClass_UActivityGroup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivityGroup.OuterSingleton, Z_Construct_UClass_UActivityGroup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivityGroup.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UActivityGroup>()
{
	return UActivityGroup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActivityGroup);
UActivityGroup::~UActivityGroup() {}
// End Class UActivityGroup

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_ActivityGroup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivityGroup, UActivityGroup::StaticClass, TEXT("UActivityGroup"), &Z_Registration_Info_UClass_UActivityGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivityGroup), 3002028226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_ActivityGroup_h_1314118(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_ActivityGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_ActivityGroup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
