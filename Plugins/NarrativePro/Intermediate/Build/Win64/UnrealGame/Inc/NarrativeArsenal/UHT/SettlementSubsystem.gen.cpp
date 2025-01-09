// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Settlements/SettlementSubsystem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettlementSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ASettlement_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USettlementSubsystem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USettlementSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class USettlementSubsystem Function GetSettlement
struct Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics
{
	struct SettlementSubsystem_eventGetSettlement_Parms
	{
		FGameplayTag SettlementTag;
		ASettlement* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settlement Subsystem" },
		{ "Comment", "//Find a settlement using its tag\n" },
		{ "ModuleRelativePath", "Public/Settlements/SettlementSubsystem.h" },
		{ "ToolTip", "Find a settlement using its tag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettlementTag_MetaData[] = {
		{ "Categories", "Narrative.Settlements" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettlementTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics::NewProp_SettlementTag = { "SettlementTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettlementSubsystem_eventGetSettlement_Parms, SettlementTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettlementTag_MetaData), NewProp_SettlementTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettlementSubsystem_eventGetSettlement_Parms, ReturnValue), Z_Construct_UClass_ASettlement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics::NewProp_SettlementTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettlementSubsystem, nullptr, "GetSettlement", nullptr, nullptr, Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics::SettlementSubsystem_eventGetSettlement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics::SettlementSubsystem_eventGetSettlement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettlementSubsystem_GetSettlement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettlementSubsystem_GetSettlement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettlementSubsystem::execGetSettlement)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_SettlementTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASettlement**)Z_Param__Result=P_THIS->GetSettlement(Z_Param_SettlementTag);
	P_NATIVE_END;
}
// End Class USettlementSubsystem Function GetSettlement

// Begin Class USettlementSubsystem
void USettlementSubsystem::StaticRegisterNativesUSettlementSubsystem()
{
	UClass* Class = USettlementSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSettlement", &USettlementSubsystem::execGetSettlement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettlementSubsystem);
UClass* Z_Construct_UClass_USettlementSubsystem_NoRegister()
{
	return USettlementSubsystem::StaticClass();
}
struct Z_Construct_UClass_USettlementSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subsystem for managing settlements. \n */" },
		{ "IncludePath", "Settlements/SettlementSubsystem.h" },
		{ "ModuleRelativePath", "Public/Settlements/SettlementSubsystem.h" },
		{ "ToolTip", "Subsystem for managing settlements." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettlementMap_MetaData[] = {
		{ "Comment", "//We cache POIs using tags for efficient lookups \n" },
		{ "ModuleRelativePath", "Public/Settlements/SettlementSubsystem.h" },
		{ "ToolTip", "We cache POIs using tags for efficient lookups" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettlementMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettlementMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SettlementMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USettlementSubsystem_GetSettlement, "GetSettlement" }, // 1484661308
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettlementSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettlementSubsystem_Statics::NewProp_SettlementMap_ValueProp = { "SettlementMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ASettlement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USettlementSubsystem_Statics::NewProp_SettlementMap_Key_KeyProp = { "SettlementMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USettlementSubsystem_Statics::NewProp_SettlementMap = { "SettlementMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettlementSubsystem, SettlementMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettlementMap_MetaData), NewProp_SettlementMap_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettlementSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementSubsystem_Statics::NewProp_SettlementMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementSubsystem_Statics::NewProp_SettlementMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettlementSubsystem_Statics::NewProp_SettlementMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettlementSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USettlementSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettlementSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettlementSubsystem_Statics::ClassParams = {
	&USettlementSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USettlementSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USettlementSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettlementSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USettlementSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettlementSubsystem()
{
	if (!Z_Registration_Info_UClass_USettlementSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettlementSubsystem.OuterSingleton, Z_Construct_UClass_USettlementSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettlementSubsystem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<USettlementSubsystem>()
{
	return USettlementSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettlementSubsystem);
USettlementSubsystem::~USettlementSubsystem() {}
// End Class USettlementSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_SettlementSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettlementSubsystem, USettlementSubsystem::StaticClass, TEXT("USettlementSubsystem"), &Z_Registration_Info_UClass_USettlementSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettlementSubsystem), 1279218725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_SettlementSubsystem_h_3507399141(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_SettlementSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_SettlementSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
