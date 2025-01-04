// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/NinjaCombatContextAnimationAbility.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatContextAnimationAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAnimationContextProviderInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimationAbility();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatContextAnimationAbility();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatContextAnimationAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatContextAnimationAbility Function CollectContext
struct Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext_Statics
{
	struct NinjaCombatContextAnimationAbility_eventCollectContext_Parms
	{
		FGameplayEventData TriggerEventData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation Context Ability" },
		{ "Comment", "/**\n\x09 * Collects and adds all relevant tags into the context.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatContextAnimationAbility.h" },
		{ "ToolTip", "Collects and adds all relevant tags into the context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerEventData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext_Statics::NewProp_TriggerEventData = { "TriggerEventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatContextAnimationAbility_eventCollectContext_Parms, TriggerEventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEventData_MetaData), NewProp_TriggerEventData_MetaData) }; // 1231635826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext_Statics::NewProp_TriggerEventData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatContextAnimationAbility, nullptr, "CollectContext", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext_Statics::NinjaCombatContextAnimationAbility_eventCollectContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext_Statics::NinjaCombatContextAnimationAbility_eventCollectContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatContextAnimationAbility::execCollectContext)
{
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_TriggerEventData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CollectContext(Z_Param_Out_TriggerEventData);
	P_NATIVE_END;
}
// End Class UNinjaCombatContextAnimationAbility Function CollectContext

// Begin Class UNinjaCombatContextAnimationAbility
void UNinjaCombatContextAnimationAbility::StaticRegisterNativesUNinjaCombatContextAnimationAbility()
{
	UClass* Class = UNinjaCombatContextAnimationAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CollectContext", &UNinjaCombatContextAnimationAbility::execCollectContext },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatContextAnimationAbility);
UClass* Z_Construct_UClass_UNinjaCombatContextAnimationAbility_NoRegister()
{
	return UNinjaCombatContextAnimationAbility::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds context details to the Animation Ability.\n */" },
		{ "IncludePath", "AbilitySystem/NinjaCombatContextAnimationAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatContextAnimationAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Adds context details to the Animation Ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorTagsFilter_MetaData[] = {
		{ "Category", "Combat Ability|Animation Context" },
		{ "Comment", "/**\n\x09 * All filter tags used on the incoming instigator container.\n\x09 * These are used to build the context for the Animation Provider.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatContextAnimationAbility.h" },
		{ "ToolTip", "All filter tags used on the incoming instigator container.\nThese are used to build the context for the Animation Provider." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTagsFilter_MetaData[] = {
		{ "Category", "Combat Ability|Animation Context" },
		{ "Comment", "/**\n\x09 * All filter tags used on the incoming target container.\n\x09 * These are used to build the context for the Animation Provider.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatContextAnimationAbility.h" },
		{ "ToolTip", "All filter tags used on the incoming target container.\nThese are used to build the context for the Animation Provider." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredDamageFilter_MetaData[] = {
		{ "Category", "Combat Ability|Animation Context" },
		{ "Comment", "/**\n\x09 * If incoming damage has any of these tags, then the hit reaction is ignored.\n\x09 * Useful to ignore incoming damage from things like Damage Over Time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatContextAnimationAbility.h" },
		{ "ToolTip", "If incoming damage has any of these tags, then the hit reaction is ignored.\nUseful to ignore incoming damage from things like Damage Over Time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstigatorTagsFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTagsFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoredDamageFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatContextAnimationAbility_CollectContext, "CollectContext" }, // 1348298795
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatContextAnimationAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::NewProp_InstigatorTagsFilter = { "InstigatorTagsFilter", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatContextAnimationAbility, InstigatorTagsFilter), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorTagsFilter_MetaData), NewProp_InstigatorTagsFilter_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::NewProp_TargetTagsFilter = { "TargetTagsFilter", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatContextAnimationAbility, TargetTagsFilter), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTagsFilter_MetaData), NewProp_TargetTagsFilter_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::NewProp_IgnoredDamageFilter = { "IgnoredDamageFilter", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatContextAnimationAbility, IgnoredDamageFilter), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoredDamageFilter_MetaData), NewProp_IgnoredDamageFilter_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::NewProp_InstigatorTagsFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::NewProp_TargetTagsFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::NewProp_IgnoredDamageFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatAnimationAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatAnimationContextProviderInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatContextAnimationAbility, ICombatAnimationContextProviderInterface), false },  // 1591579501
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::ClassParams = {
	&UNinjaCombatContextAnimationAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatContextAnimationAbility()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatContextAnimationAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatContextAnimationAbility.OuterSingleton, Z_Construct_UClass_UNinjaCombatContextAnimationAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatContextAnimationAbility.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatContextAnimationAbility>()
{
	return UNinjaCombatContextAnimationAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatContextAnimationAbility);
UNinjaCombatContextAnimationAbility::~UNinjaCombatContextAnimationAbility() {}
// End Class UNinjaCombatContextAnimationAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatContextAnimationAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatContextAnimationAbility, UNinjaCombatContextAnimationAbility::StaticClass, TEXT("UNinjaCombatContextAnimationAbility"), &Z_Registration_Info_UClass_UNinjaCombatContextAnimationAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatContextAnimationAbility), 2011505196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatContextAnimationAbility_h_3859853258(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatContextAnimationAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatContextAnimationAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
