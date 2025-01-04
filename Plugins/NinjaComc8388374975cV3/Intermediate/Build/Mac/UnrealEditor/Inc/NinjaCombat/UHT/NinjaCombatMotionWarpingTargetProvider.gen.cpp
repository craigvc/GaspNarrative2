// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Providers/NinjaCombatMotionWarpingTargetProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatMotionWarpingTargetProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatMotionWarpingTargetProvider Function RequestWarpTarget
struct NinjaCombatMotionWarpingTargetProvider_eventRequestWarpTarget_Parms
{
	UNinjaCombatGameplayAbility* CombatAbility;
};
static const FName NAME_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget = FName(TEXT("RequestWarpTarget"));
void UNinjaCombatMotionWarpingTargetProvider::RequestWarpTarget(UNinjaCombatGameplayAbility* CombatAbility) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatMotionWarpingTargetProvider_eventRequestWarpTarget_Parms Parms;
		Parms.CombatAbility=CombatAbility;
		const_cast<UNinjaCombatMotionWarpingTargetProvider*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UNinjaCombatMotionWarpingTargetProvider*>(this)->RequestWarpTarget_Implementation(CombatAbility);
	}
}
struct Z_Construct_UFunction_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warp Target Provider" },
		{ "Comment", "/**\n\x09 * Provides the target for the Motion Warping, for a combat animation.\n\x09 * \n\x09 * @param CombatAbility\n\x09 *\x09\x09The Ability requesting this information. It will receive the information back\n\x09 *\x09\x09using the \"Combat Target Receiver\" interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatMotionWarpingTargetProvider.h" },
		{ "ToolTip", "Provides the target for the Motion Warping, for a combat animation.\n\n@param CombatAbility\n             The Ability requesting this information. It will receive the information back\n             using the \"Combat Target Receiver\" interface." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatAbility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget_Statics::NewProp_CombatAbility = { "CombatAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMotionWarpingTargetProvider_eventRequestWarpTarget_Parms, CombatAbility), Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget_Statics::NewProp_CombatAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider, nullptr, "RequestWarpTarget", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget_Statics::PropPointers), sizeof(NinjaCombatMotionWarpingTargetProvider_eventRequestWarpTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatMotionWarpingTargetProvider_eventRequestWarpTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMotionWarpingTargetProvider::execRequestWarpTarget)
{
	P_GET_OBJECT(UNinjaCombatGameplayAbility,Z_Param_CombatAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestWarpTarget_Implementation(Z_Param_CombatAbility);
	P_NATIVE_END;
}
// End Class UNinjaCombatMotionWarpingTargetProvider Function RequestWarpTarget

// Begin Class UNinjaCombatMotionWarpingTargetProvider
void UNinjaCombatMotionWarpingTargetProvider::StaticRegisterNativesUNinjaCombatMotionWarpingTargetProvider()
{
	UClass* Class = UNinjaCombatMotionWarpingTargetProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestWarpTarget", &UNinjaCombatMotionWarpingTargetProvider::execRequestWarpTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatMotionWarpingTargetProvider);
UClass* Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider_NoRegister()
{
	return UNinjaCombatMotionWarpingTargetProvider::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Basic way to provide a target that can be used as a warp reference.\n *\n * It won't provide targets directly. Instead, it will do so asynchronously via the Motion\n * Warping Target Receiver interface, which must be implemented by the requesting Ability.\n */" },
		{ "DisplayName", "Default Target Provider" },
		{ "IncludePath", "AbilitySystem/Providers/NinjaCombatMotionWarpingTargetProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatMotionWarpingTargetProvider.h" },
		{ "ToolTip", "Basic way to provide a target that can be used as a warp reference.\n\nIt won't provide targets directly. Instead, it will do so asynchronously via the Motion\nWarping Target Receiver interface, which must be implemented by the requesting Ability." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatMotionWarpingTargetProvider_RequestWarpTarget, "RequestWarpTarget" }, // 3904778596
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatMotionWarpingTargetProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider_Statics::ClassParams = {
	&UNinjaCombatMotionWarpingTargetProvider::StaticClass,
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
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatMotionWarpingTargetProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatMotionWarpingTargetProvider.OuterSingleton, Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatMotionWarpingTargetProvider.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatMotionWarpingTargetProvider>()
{
	return UNinjaCombatMotionWarpingTargetProvider::StaticClass();
}
UNinjaCombatMotionWarpingTargetProvider::UNinjaCombatMotionWarpingTargetProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatMotionWarpingTargetProvider);
UNinjaCombatMotionWarpingTargetProvider::~UNinjaCombatMotionWarpingTargetProvider() {}
// End Class UNinjaCombatMotionWarpingTargetProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatMotionWarpingTargetProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider, UNinjaCombatMotionWarpingTargetProvider::StaticClass, TEXT("UNinjaCombatMotionWarpingTargetProvider"), &Z_Registration_Info_UClass_UNinjaCombatMotionWarpingTargetProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatMotionWarpingTargetProvider), 1058578206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatMotionWarpingTargetProvider_h_3397225840(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatMotionWarpingTargetProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatMotionWarpingTargetProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
