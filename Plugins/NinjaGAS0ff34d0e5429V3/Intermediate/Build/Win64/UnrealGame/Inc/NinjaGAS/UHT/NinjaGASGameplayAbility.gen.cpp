// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/AbilitySystem/NinjaGASGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaGASGameplayAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
NINJAGAS_API UClass* Z_Construct_UClass_UBatchGameplayAbilityInterface_NoRegister();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASGameplayAbility();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Class UNinjaGASGameplayAbility Function IsPassiveAbility
struct Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics
{
	struct NinjaGASGameplayAbility_eventIsPassiveAbility_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja GAS|Gameplay Ability" },
		{ "Comment", "/**\n\x09 * Checks if this Gameplay Ability is passive, which is done via the passive tag.\n\x09 * Returns true if \"Ability.Passive\" is found in the Ability Tags container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASGameplayAbility.h" },
		{ "ToolTip", "Checks if this Gameplay Ability is passive, which is done via the passive tag.\nReturns true if \"Ability.Passive\" is found in the Ability Tags container." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaGASGameplayAbility_eventIsPassiveAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaGASGameplayAbility_eventIsPassiveAbility_Parms), &Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASGameplayAbility, nullptr, "IsPassiveAbility", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics::NinjaGASGameplayAbility_eventIsPassiveAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics::NinjaGASGameplayAbility_eventIsPassiveAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASGameplayAbility::execIsPassiveAbility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPassiveAbility();
	P_NATIVE_END;
}
// End Class UNinjaGASGameplayAbility Function IsPassiveAbility

// Begin Class UNinjaGASGameplayAbility
void UNinjaGASGameplayAbility::StaticRegisterNativesUNinjaGASGameplayAbility()
{
	UClass* Class = UNinjaGASGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsPassiveAbility", &UNinjaGASGameplayAbility::execIsPassiveAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaGASGameplayAbility);
UClass* Z_Construct_UClass_UNinjaGASGameplayAbility_NoRegister()
{
	return UNinjaGASGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UNinjaGASGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Ability Class providing all extensions available in the framework. \n */" },
		{ "IncludePath", "AbilitySystem/NinjaGASGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASGameplayAbility.h" },
		{ "ToolTip", "Base Ability Class providing all extensions available in the framework." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaGASGameplayAbility_IsPassiveAbility, "IsPassiveAbility" }, // 1889602298
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaGASGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaGASGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaGASGameplayAbility_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBatchGameplayAbilityInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaGASGameplayAbility, IBatchGameplayAbilityInterface), false },  // 3213682849
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaGASGameplayAbility_Statics::ClassParams = {
	&UNinjaGASGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaGASGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaGASGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UNinjaGASGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaGASGameplayAbility.OuterSingleton, Z_Construct_UClass_UNinjaGASGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaGASGameplayAbility.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<UNinjaGASGameplayAbility>()
{
	return UNinjaGASGameplayAbility::StaticClass();
}
UNinjaGASGameplayAbility::UNinjaGASGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaGASGameplayAbility);
UNinjaGASGameplayAbility::~UNinjaGASGameplayAbility() {}
// End Class UNinjaGASGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaGASGameplayAbility, UNinjaGASGameplayAbility::StaticClass, TEXT("UNinjaGASGameplayAbility"), &Z_Registration_Info_UClass_UNinjaGASGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaGASGameplayAbility), 2806055632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASGameplayAbility_h_2176345473(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
