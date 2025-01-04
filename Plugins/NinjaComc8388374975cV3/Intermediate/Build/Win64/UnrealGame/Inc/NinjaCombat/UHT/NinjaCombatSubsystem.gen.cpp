// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/NinjaCombatSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatSubsystem();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatSubsystem Function GetRandomFloatInRange
struct Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics
{
	struct NinjaCombatSubsystem_eventGetRandomFloatInRange_Parms
	{
		float Min;
		float Max;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Provides a random float value within a given range.\n\x09 *\n\x09 * The float will be retrieved from an internal seed initialized along with the Subsystem, meaning\n\x09 * it will have a far more accurate distribution than simple floats from the Math Library or from\n\x09 * un-initialized/different seeds.\n\x09 *\n\x09 * @param Min\x09\x09\x09Minimum value for the range, inclusive.\n\x09 * @param Max\x09\x09\x09Maximum value for the range, inclusive.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09""A randomly generated float, withing the determined range, created\n\x09 *\x09\x09using an internal seed for better distribution.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatSubsystem.h" },
		{ "ToolTip", "Provides a random float value within a given range.\n\nThe float will be retrieved from an internal seed initialized along with the Subsystem, meaning\nit will have a far more accurate distribution than simple floats from the Math Library or from\nun-initialized/different seeds.\n\n@param Min                   Minimum value for the range, inclusive.\n@param Max                   Maximum value for the range, inclusive.\n\n@return\n             A randomly generated float, withing the determined range, created\n             using an internal seed for better distribution." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatSubsystem_eventGetRandomFloatInRange_Parms, Min), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatSubsystem_eventGetRandomFloatInRange_Parms, Max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatSubsystem_eventGetRandomFloatInRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatSubsystem, nullptr, "GetRandomFloatInRange", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::NinjaCombatSubsystem_eventGetRandomFloatInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::NinjaCombatSubsystem_eventGetRandomFloatInRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatSubsystem::execGetRandomFloatInRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Min);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRandomFloatInRange(Z_Param_Min,Z_Param_Max);
	P_NATIVE_END;
}
// End Class UNinjaCombatSubsystem Function GetRandomFloatInRange

// Begin Class UNinjaCombatSubsystem
void UNinjaCombatSubsystem::StaticRegisterNativesUNinjaCombatSubsystem()
{
	UClass* Class = UNinjaCombatSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRandomFloatInRange", &UNinjaCombatSubsystem::execGetRandomFloatInRange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatSubsystem);
UClass* Z_Construct_UClass_UNinjaCombatSubsystem_NoRegister()
{
	return UNinjaCombatSubsystem::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides game instance-level functionalities for the Combat System.\n */" },
		{ "IncludePath", "NinjaCombatSubsystem.h" },
		{ "ModuleRelativePath", "Public/NinjaCombatSubsystem.h" },
		{ "ToolTip", "Provides game instance-level functionalities for the Combat System." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatSubsystem_GetRandomFloatInRange, "GetRandomFloatInRange" }, // 119088927
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatSubsystem_Statics::ClassParams = {
	&UNinjaCombatSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatSubsystem()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatSubsystem.OuterSingleton, Z_Construct_UClass_UNinjaCombatSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatSubsystem.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatSubsystem>()
{
	return UNinjaCombatSubsystem::StaticClass();
}
UNinjaCombatSubsystem::UNinjaCombatSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatSubsystem);
UNinjaCombatSubsystem::~UNinjaCombatSubsystem() {}
// End Class UNinjaCombatSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatSubsystem, UNinjaCombatSubsystem::StaticClass, TEXT("UNinjaCombatSubsystem"), &Z_Registration_Info_UClass_UNinjaCombatSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatSubsystem), 2255769342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatSubsystem_h_902561546(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
