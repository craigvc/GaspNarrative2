// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeCheatManager.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCheatManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCheatManager();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCheatManager();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCheatManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeCheatManager Function GiveCurrency
struct Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency_Statics
{
	struct NarrativeCheatManager_eventGiveCurrency_Parms
	{
		int32 Currency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Gives the specified amount of currency to the player\n" },
		{ "CPP_Default_Currency", "1" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCheatManager.h" },
		{ "ToolTip", "Gives the specified amount of currency to the player" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCheatManager_eventGiveCurrency_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency_Statics::NewProp_Currency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCheatManager, nullptr, "GiveCurrency", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency_Statics::NarrativeCheatManager_eventGiveCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency_Statics::NarrativeCheatManager_eventGiveCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCheatManager::execGiveCurrency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Currency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GiveCurrency(Z_Param_Currency);
	P_NATIVE_END;
}
// End Class UNarrativeCheatManager Function GiveCurrency

// Begin Class UNarrativeCheatManager Function GiveSkillPoints
struct Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints_Statics
{
	struct NarrativeCheatManager_eventGiveSkillPoints_Parms
	{
		int32 Points;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Gives the specified amount of skill points to the player\n" },
		{ "CPP_Default_Points", "1" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCheatManager.h" },
		{ "ToolTip", "Gives the specified amount of skill points to the player" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCheatManager_eventGiveSkillPoints_Parms, Points), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCheatManager, nullptr, "GiveSkillPoints", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints_Statics::NarrativeCheatManager_eventGiveSkillPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints_Statics::NarrativeCheatManager_eventGiveSkillPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCheatManager::execGiveSkillPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Points);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GiveSkillPoints(Z_Param_Points);
	P_NATIVE_END;
}
// End Class UNarrativeCheatManager Function GiveSkillPoints

// Begin Class UNarrativeCheatManager
void UNarrativeCheatManager::StaticRegisterNativesUNarrativeCheatManager()
{
	UClass* Class = UNarrativeCheatManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GiveCurrency", &UNarrativeCheatManager::execGiveCurrency },
		{ "GiveSkillPoints", &UNarrativeCheatManager::execGiveSkillPoints },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCheatManager);
UClass* Z_Construct_UClass_UNarrativeCheatManager_NoRegister()
{
	return UNarrativeCheatManager::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCheatManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains Narrative pro console commands that will be stripped from packaged game.\n */" },
		{ "IncludePath", "UnrealFramework/NarrativeCheatManager.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCheatManager.h" },
		{ "ToolTip", "Contains Narrative pro console commands that will be stripped from packaged game." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCheatManager_GiveCurrency, "GiveCurrency" }, // 1955252922
		{ &Z_Construct_UFunction_UNarrativeCheatManager_GiveSkillPoints, "GiveSkillPoints" }, // 3504875377
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCheatManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeCheatManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCheatManager,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCheatManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCheatManager_Statics::ClassParams = {
	&UNarrativeCheatManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCheatManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCheatManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCheatManager()
{
	if (!Z_Registration_Info_UClass_UNarrativeCheatManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCheatManager.OuterSingleton, Z_Construct_UClass_UNarrativeCheatManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCheatManager.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeCheatManager>()
{
	return UNarrativeCheatManager::StaticClass();
}
UNarrativeCheatManager::UNarrativeCheatManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCheatManager);
UNarrativeCheatManager::~UNarrativeCheatManager() {}
// End Class UNarrativeCheatManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCheatManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCheatManager, UNarrativeCheatManager::StaticClass, TEXT("UNarrativeCheatManager"), &Z_Registration_Info_UClass_UNarrativeCheatManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCheatManager), 1381186830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCheatManager_h_426447331(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCheatManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCheatManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
