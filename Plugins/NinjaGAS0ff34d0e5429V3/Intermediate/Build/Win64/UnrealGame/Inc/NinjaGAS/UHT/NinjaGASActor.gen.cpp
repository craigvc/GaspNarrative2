// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/GameFramework/NinjaGASActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaGASActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode();
NINJAGAS_API UClass* Z_Construct_UClass_ANinjaGASActor();
NINJAGAS_API UClass* Z_Construct_UClass_ANinjaGASActor_NoRegister();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Class ANinjaGASActor
void ANinjaGASActor::StaticRegisterNativesANinjaGASActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaGASActor);
UClass* Z_Construct_UClass_ANinjaGASActor_NoRegister()
{
	return ANinjaGASActor::StaticClass();
}
struct Z_Construct_UClass_ANinjaGASActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Actor class, with a pre-configured Ability System Component.\n */" },
		{ "IncludePath", "GameFramework/NinjaGASActor.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base Actor class, with a pre-configured Ability System Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityReplicationMode_MetaData[] = {
		{ "Category", "Ability System" },
		{ "Comment", "/**\n\x09 * Sets how the Ability System component will replicate data to clients.\n\x09 *\n\x09 * As per Dan Tranek's GAS Documentation, these are their descriptions and recommendations:\n\x09 * \n\x09 * - Full:\x09\x09Single Player, every Gameplay Effect is replicated to every client.\n\x09 * \n\x09 * - Mixed:\x09\x09Player Actors in Multiplayer, Gameplay Effects are replicated to owning client.\n\x09 *\x09\x09\x09\x09Gameplay Tags and Cues will replicate to everyone.\n\x09 *\x09\x09\x09\x09\n\x09 * - Minimal\x09""AI Actors in Multiplayer, Gameplay Effects are never replicated.\n\x09 *\x09\x09\x09\x09Gameplay Tags and Cues will replicate to everyone.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASActor.h" },
		{ "ToolTip", "Sets how the Ability System component will replicate data to clients.\n\nAs per Dan Tranek's GAS Documentation, these are their descriptions and recommendations:\n\n- Full:              Single Player, every Gameplay Effect is replicated to every client.\n\n- Mixed:             Player Actors in Multiplayer, Gameplay Effects are replicated to owning client.\n                             Gameplay Tags and Cues will replicate to everyone.\n\n- Minimal    AI Actors in Multiplayer, Gameplay Effects are never replicated.\n                             Gameplay Tags and Cues will replicate to everyone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorAbilities_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "Comment", "/** The Ability System Component managed by this actor class. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASActor.h" },
		{ "ToolTip", "The Ability System Component managed by this actor class." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityReplicationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityReplicationMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaGASActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANinjaGASActor_Statics::NewProp_AbilityReplicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANinjaGASActor_Statics::NewProp_AbilityReplicationMode = { "AbilityReplicationMode", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaGASActor, AbilityReplicationMode), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityReplicationMode_MetaData), NewProp_AbilityReplicationMode_MetaData) }; // 3979288675
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaGASActor_Statics::NewProp_ActorAbilities = { "ActorAbilities", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaGASActor, ActorAbilities), Z_Construct_UClass_UNinjaGASAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorAbilities_MetaData), NewProp_ActorAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaGASActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaGASActor_Statics::NewProp_AbilityReplicationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaGASActor_Statics::NewProp_AbilityReplicationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaGASActor_Statics::NewProp_ActorAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaGASActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANinjaGASActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaGASActor, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaGASActor_Statics::ClassParams = {
	&ANinjaGASActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANinjaGASActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaGASActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaGASActor()
{
	if (!Z_Registration_Info_UClass_ANinjaGASActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaGASActor.OuterSingleton, Z_Construct_UClass_ANinjaGASActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaGASActor.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<ANinjaGASActor>()
{
	return ANinjaGASActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaGASActor);
ANinjaGASActor::~ANinjaGASActor() {}
// End Class ANinjaGASActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaGASActor, ANinjaGASActor::StaticClass, TEXT("ANinjaGASActor"), &Z_Registration_Info_UClass_ANinjaGASActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaGASActor), 3690751421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASActor_h_3969244014(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
