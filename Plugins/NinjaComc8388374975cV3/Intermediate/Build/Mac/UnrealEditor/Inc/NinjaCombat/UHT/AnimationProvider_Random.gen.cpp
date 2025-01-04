// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Providers/Animation/AnimationProvider_Random.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationProvider_Random() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimationProvider_Random();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimationProvider_Random_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimationProvider();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomAnimationContext();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FRandomAnimationContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RandomAnimationContext;
class UScriptStruct* FRandomAnimationContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RandomAnimationContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RandomAnimationContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRandomAnimationContext, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("RandomAnimationContext"));
	}
	return Z_Registration_Info_UScriptStruct_RandomAnimationContext.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FRandomAnimationContext>()
{
	return FRandomAnimationContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRandomAnimationContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Configuration Class for the Random Animation. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_Random.h" },
		{ "ToolTip", "Configuration Class for the Random Animation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[] = {
		{ "Category", "Random Animation Context" },
		{ "Comment", "/** Animation Montage used as an option. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_Random.h" },
		{ "ToolTip", "Animation Montage used as an option." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRandomAnimationContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRandomAnimationContext_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRandomAnimationContext, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontage_MetaData), NewProp_AnimMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRandomAnimationContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomAnimationContext_Statics::NewProp_AnimMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomAnimationContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRandomAnimationContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	&NewStructOps,
	"RandomAnimationContext",
	Z_Construct_UScriptStruct_FRandomAnimationContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomAnimationContext_Statics::PropPointers),
	sizeof(FRandomAnimationContext),
	alignof(FRandomAnimationContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomAnimationContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRandomAnimationContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRandomAnimationContext()
{
	if (!Z_Registration_Info_UScriptStruct_RandomAnimationContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RandomAnimationContext.InnerSingleton, Z_Construct_UScriptStruct_FRandomAnimationContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RandomAnimationContext.InnerSingleton;
}
// End ScriptStruct FRandomAnimationContext

// Begin Class UAnimationProvider_Random
void UAnimationProvider_Random::StaticRegisterNativesUAnimationProvider_Random()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationProvider_Random);
UClass* Z_Construct_UClass_UAnimationProvider_Random_NoRegister()
{
	return UAnimationProvider_Random::StaticClass();
}
struct Z_Construct_UClass_UAnimationProvider_Random_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Selects a random Animation Montage from a list.\n */" },
		{ "DisplayName", "Random" },
		{ "IncludePath", "AbilitySystem/Providers/Animation/AnimationProvider_Random.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_Random.h" },
		{ "ToolTip", "Selects a random Animation Montage from a list." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomAnimations_MetaData[] = {
		{ "Category", "Animation Provider" },
		{ "Comment", "/** List of random Animation Montages that can be provided. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_Random.h" },
		{ "TitleProperty", "AnimMontage" },
		{ "ToolTip", "List of random Animation Montages that can be provided." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomAnimations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RandomAnimations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationProvider_Random>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationProvider_Random_Statics::NewProp_RandomAnimations_Inner = { "RandomAnimations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRandomAnimationContext, METADATA_PARAMS(0, nullptr) }; // 825630819
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationProvider_Random_Statics::NewProp_RandomAnimations = { "RandomAnimations", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationProvider_Random, RandomAnimations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomAnimations_MetaData), NewProp_RandomAnimations_MetaData) }; // 825630819
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationProvider_Random_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationProvider_Random_Statics::NewProp_RandomAnimations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationProvider_Random_Statics::NewProp_RandomAnimations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationProvider_Random_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationProvider_Random_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatAnimationProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationProvider_Random_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationProvider_Random_Statics::ClassParams = {
	&UAnimationProvider_Random::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimationProvider_Random_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationProvider_Random_Statics::PropPointers),
	0,
	0x003110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationProvider_Random_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationProvider_Random_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationProvider_Random()
{
	if (!Z_Registration_Info_UClass_UAnimationProvider_Random.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationProvider_Random.OuterSingleton, Z_Construct_UClass_UAnimationProvider_Random_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationProvider_Random.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAnimationProvider_Random>()
{
	return UAnimationProvider_Random::StaticClass();
}
UAnimationProvider_Random::UAnimationProvider_Random() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationProvider_Random);
UAnimationProvider_Random::~UAnimationProvider_Random() {}
// End Class UAnimationProvider_Random

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_Random_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRandomAnimationContext::StaticStruct, Z_Construct_UScriptStruct_FRandomAnimationContext_Statics::NewStructOps, TEXT("RandomAnimationContext"), &Z_Registration_Info_UScriptStruct_RandomAnimationContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRandomAnimationContext), 825630819U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationProvider_Random, UAnimationProvider_Random::StaticClass, TEXT("UAnimationProvider_Random"), &Z_Registration_Info_UClass_UAnimationProvider_Random, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationProvider_Random), 2276958982U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_Random_h_1122014585(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_Random_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_Random_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_Random_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_Random_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
